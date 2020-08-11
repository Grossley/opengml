FNDEF0(draw_get_alpha)
FNDEF0(draw_get_colour)
FNDEF1(draw_set_alpha, a)
FNDEF1(draw_set_colour, c)
ALIAS(draw_set_colour, draw_set_color)
ALIAS(draw_get_colour, draw_get_color)

FNDEF4(draw_line, x1, y1, x2, y2)
FNDEF5(draw_rectangle, x1, y1, x2, y2, outline)
FNDEF9(draw_rectangle_colour, x1, y1, x2, y2, c0, c1, c2, c3, outline)
FNDEF4(draw_circle, x, y, r, outline)
FNDEF6(draw_circle_colour, x, y, r, c1, c2, outline)
FNDEF1(draw_set_circle_precision, prec)
ALIAS(draw_circle_colour, draw_circle_color)

// primitives
FNDEF1(draw_primitive_begin, glenum)
FNDEF2(draw_vertex, x, y)
FNDEF4(draw_vertex_texture, x, y, u, v)
FNDEF4(draw_vertex_colour, x, y, col, alpha)
ALIAS(draw_vertex_colour, draw_vertex_color)
FNDEF6(draw_vertex_texture_colour, x, y, u, v, col, alpha)
ALIAS(draw_vertex_texture_colour, draw_vertex_texture_color)
FNDEF0(draw_primitive_end)

// sprites
FNDEF0(draw_self)
FNDEF4(draw_sprite, sprite, subimg, x, y)
FNDEF9(draw_sprite_ext, sprite, subimg, x, y, xscale, yscale, angle, c, alpha)
FNDEF8(draw_sprite_part, sprite, subimg, left, top, width, height, x, y)
FNDEF12(draw_sprite_part_ext, sprite, subimg, left, top, width, height, x, y, xscale, yscale, c, alpha)
FNDEF16(draw_sprite_general, sprite, subimg, left, top, width, height, x, y, xscale, yscale, angle, c1, c2, c3, c4, alpha)
FNDEF6(draw_sprite_stretched, sprite, subimg, x, y, w, h)
FNDEF8(draw_sprite_stretched_ext, sprite, subimg, x, y, w, h, c, alpha)
FNDEF11(draw_sprite_pos, sprite, subimg, x1, y1, x2, y2, x3, y3, x4, y4, alpha)

// backgrounds
FNDEF3(draw_background, background, x, y)
FNDEF8(draw_background_ext, background, x, y, xscale, yscale, angle, c, alpha)
FNDEF7(draw_background_ext, background, x, y, xscale, yscale, c, alpha)
FNDEF7(draw_background_part, background, left, top, width, height, x, y)
FNDEF11(draw_background_part_ext, background, left, top, width, height, x, y, xscale, yscale, c, alpha)
FNDEF14(draw_background_general, background, left, top, width, height, x, y, xscale, yscale, c1, c2, c3, c4, alpha)
FNDEF5(draw_background_stretched, background, x, y, w, h)
FNDEF7(draw_background_stretched_ext, background, x, y, w, h, c, alpha)
FNDEF10(draw_background_pos, background, x1, y1, x2, y2, x3, y3, x4, y4, alpha)

// surfaces
FNDEF3(draw_surface, id, x, y)
FNDEF8(draw_surface_ext, id, x, y, xscale, yscale, angle, c, alpha)
FNDEF7(draw_surface_part, id, left, top, width, height, x, y)
FNDEF11(draw_surface_part_ext, id, left, top, width, height, x, y, xscale, yscale, c, alpha)
FNDEF15(draw_surface_general, id, left, top, width, height, x, y, xscale, yscale, angle, c1, c2, c3, c4, alpha)
FNDEF5(draw_surface_stretched, id, x, y, w, h)
FNDEF7(draw_surface_stretched_ext, id, x, y, w, h, c, alpha)
FNDEF10(draw_surface_pos, id, x1, y1, x2, y2, x3, y3, x4, y4, alpha)

FNDEF1(texture_set_blending, enable)

// text
FNDEF3(draw_text, x, y, text)
FNDEF5(draw_text_ext, x, y, text, sep, w)
FNDEF8(draw_text_colour, x, y, text, c1, c2, c3, c4, alpha)
FNDEF10(draw_text_ext_colour, x, y, text, sep, w, c1, c2, c3, c4, alpha)
ALIAS(draw_text_colour, draw_text_color)
ALIAS(draw_text_ext_colour, draw_text_ext_color)
FNDEF1(draw_set_halign, a)
FNDEF1(draw_set_valign, a)
FNDEF1(draw_set_font, font)

FNDEF1(draw_clear, c)
FNDEF2(draw_clear_alpha, c, a)
FNDEF1(draw_enable_alphablend, y)
FNDEF4(draw_set_colour_write_enable, r, g, b, a)
ALIAS(draw_set_colour_write_enable, draw_set_color_write_enable)

FNDEF1(draw_set_blend_mode, bm)
FNDEF2(draw_set_blend_mode_ext, src, dst)

FNDEF1(draw_set_alpha_test, enabled)
FNDEF1(draw_set_alpha_test_ref_value, value)

CONST(fa_left, 0)
CONST(fa_center, 1)
CONST(fa_right, 2)

CONST(fa_top, 0)
CONST(fa_middle, 1)
CONST(fa_bottom, 2)

CONST(bm_normal, 0)
CONST(bm_add, 1)
CONST(bm_subtract, 2)
CONST(bm_max, 3)

CONST(bm_zero, 4)
CONST(bm_one, 5)
CONST(bm_src_colour, 6)
ALIAS(bm_src_colour, bm_src_color)
CONST(bm_inv_src_colour, 7)
ALIAS(bm_inv_src_colour, bm_inv_src_color)
CONST(bm_src_alpha, 8)
CONST(bm_inv_src_alpha, 9)
CONST(bm_dest_alpha, 10)
CONST(bm_inv_dest_alpha, 11)
CONST(bm_dest_colour, 12)
ALIAS(bm_dest_colour, bm_dest_color)
CONST(bm_inv_dest_colour, 13)
ALIAS(bm_inv_dest_colour, bm_inv_dest_color)
CONST(bm_src_alpha_sat, 14)

CONST(pr_pointlist, 0)
CONST(pr_linelist, 1)
CONST(pr_linestrip, 2)
CONST(pr_lineloop, 6)
CONST(pr_triangle_list, 3)
ALIAS(pr_triangle_list, pr_trianglelist)
ALIAS(pr_triangle_list, pr_triangles)
CONST(pr_triangle_strip, 4)
ALIAS(pr_triangle_strip, pr_trianglestrip)
CONST(pr_triangle_fan, 5)
ALIAS(pr_triangle_fan, pr_trianglefan)

// gpu functinos
ALIAS(draw_set_blend_mode, gpu_set_blendmode)
ALIAS(draw_set_blend_mode_ext, gpu_set_blendmode_ext)
FNDEF4(gpu_set_blendmode_sepalpha, s, d, sa, da)
// single-arg versions which take an array.
FNDEF1(gpu_set_blendmode_ext, arr)
FNDEF1(gpu_set_blendmode_sepalpha, arr)

FNDEF0(ogm_gpu_disable_scissor)
FNDEF4(ogm_gpu_enable_scissor, x1, y1, x2, y2)