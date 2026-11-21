/* f_0x102c1700 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Decodes/transforms a byte buffer using lookup tables, with different modes based on element size and stride from a descriptor struct.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102c1700(Guest* g, uint32_t param1, uint32_t param2, uint32_t param3, uint32_t param4, uint32_t param5)
{
    (void)g;
    const uint32_t edi = param1;
    const uint32_t eax = param3;
    const uint32_t ecx_init = param2;
    const uint32_t esi = param4;
    const uint8_t bl_param5 = (uint8_t)param5;

    const uint8_t cl = rd8(edi + 9u);
    const uint32_t edx = rd32(edi);

    /* Entry condition: ((cl < 9 && eax != 0) || (cl == 16 && esi != 0)) */
    if (!((cl < 9u && eax != 0u) || (cl == 16u && esi != 0u))) {
        return;
    }

    const uint8_t ebx_stride = rd8(edi + 8u);

    if (ebx_stride == 0u) {
        /* Path: stride==0, check cl for 2,4,8,16 */
        if (cl == 2u && edx != 0u) {
            uint32_t ptr = ecx_init;
            uint32_t count = ((edx - 1u) >> 2) + 1u;
            while (count != 0u) {
                uint8_t val = rd8(ptr);
                uint32_t part_c0 = (uint32_t)(val & 0xC0u);
                uint32_t part_30 = (uint32_t)(val & 0x30u);
                uint32_t part_03 = (uint32_t)(val & 0x03u);
                uint32_t part_0C = (uint32_t)(val & 0x0Cu);

                /* Build index for part_0C: ((part<<2|part)<<2|(int)part>>2|part) */
                uint32_t idx_c = part_0C;
                idx_c = (idx_c << 2) | part_0C;
                idx_c = (idx_c << 2) | ((uint32_t)((int32_t)part_0C >> 2));
                idx_c = idx_c | part_0C;

                uint8_t dl = rd8(idx_c + eax);
                dl &= 0xCFu;

                /* Build index for part_03: (((part<<2|part)<<2|part)<<2|part) */
                uint32_t idx_3 = part_03;
                idx_3 = (idx_3 << 2) | part_03;
                idx_3 = (idx_3 << 2) | part_03;
                idx_3 = (idx_3 << 2) | part_03;

                uint8_t cl_tmp = rd8(idx_3 + eax);
                cl_tmp >>= 2;
                dl |= cl_tmp;
                dl >>= 2;

                /* Build index for part_30: (((int)((int)part>>2|part)>>2|part<<2|part)) */
                uint32_t idx_30 = part_30;
                uint32_t tmp = (uint32_t)((int32_t)idx_30 >> 2);
                tmp |= idx_30;
                tmp = (uint32_t)((int32_t)tmp >> 2);
                tmp |= (idx_30 << 2);
                tmp |= idx_30;

                uint8_t cl_tmp2 = rd8(tmp + eax);
                cl_tmp2 &= 0xC3u;
                dl |= cl_tmp2;
                dl >>= 2;

                /* Build index for part_c0: (((int)((int)((int)part>>2|part)>>2|part)>>2|part)) */
                uint32_t idx_c0 = part_c0;
                tmp = (uint32_t)((int32_t)idx_c0 >> 2);
                tmp |= idx_c0;
                tmp = (uint32_t)((int32_t)tmp >> 2);
                tmp |= idx_c0;
                tmp = (uint32_t)((int32_t)tmp >> 2);
                tmp |= idx_c0;

                uint8_t cl_tmp3 = rd8(tmp + eax);
                cl_tmp3 &= 0xC0u;
                dl |= cl_tmp3;

                wr8(ptr, dl);
                ptr++;
                count--;
            }
        }

        /* Re-read cl after the stride==0 block (at 102c19d4) */
        const uint8_t cl2 = rd8(edi + 9u);

        if (cl2 == 4u) {
            if (edx != 0u) {
                uint32_t ptr = ecx_init;
                uint32_t count = ((edx - 1u) >> 1) + 1u;
                while (count != 0u) {
                    uint8_t val = rd8(ptr);
                    uint32_t lo_nib = (uint32_t)(val & 0x0Fu);
                    uint32_t hi_nib = (uint32_t)(val & 0xF0u);

                    /* idx_hi: ((int)hi>>4 | hi) */
                    uint32_t idx_hi = (uint32_t)((int32_t)hi_nib >> 4) | hi_nib;
                    uint8_t dl = rd8(idx_hi + eax);
                    dl &= 0xF0u;

                    /* idx_lo: (lo<<4 | lo) */
                    uint32_t idx_lo = (lo_nib << 4) | lo_nib;
                    uint8_t cl_tmp = rd8(idx_lo + eax);
                    cl_tmp >>= 4;
                    dl |= cl_tmp;

                    wr8(ptr, dl);
                    ptr++;
                    count--;
                }
            }
        } else if (cl2 == 8u) {
            if (edx != 0u) {
                uint32_t ptr = ecx_init;
                uint32_t cnt = edx;
                while (cnt != 0u) {
                    uint8_t val = rd8(ptr);
                    wr8(ptr, rd8((uint32_t)val + eax));
                    ptr++;
                    cnt--;
                }
            }
        } else if (cl2 == 16u) {
            if (edx != 0u) {
                uint32_t ptr = ecx_init;
                uint32_t cnt = edx;
                while (cnt != 0u) {
                    uint8_t b1 = rd8(ptr + 1u);
                    uint32_t idx_tbl = (uint32_t)b1 >> (bl_param5 & 0x1Fu);
                    uint32_t tbl_ptr = rd32(esi + idx_tbl * 4u);
                    uint8_t b0 = rd8(ptr);
                    uint16_t wv = rd16(tbl_ptr + (uint32_t)b0 * 2u);
                    wr8(ptr + 1u, (uint8_t)(wv & 0xFFu));
                    wr8(ptr, (uint8_t)((wv >> 8) & 0xFFu));
                    ptr += 2u;
                    cnt--;
                }
            }
        }
    } else if (ebx_stride == 2u) {
        /* Path: stride==2 */
        if (cl == 8u) {
            if (edx != 0u) {
                uint32_t ptr = ecx_init;
                uint32_t cnt = edx;
                while (cnt != 0u) {
                    wr8(ptr, rd8((uint32_t)rd8(ptr) + eax));
                    wr8(ptr + 1u, rd8((uint32_t)rd8(ptr + 1u) + eax));
                    wr8(ptr + 2u, rd8((uint32_t)rd8(ptr + 2u) + eax));
                    ptr += 3u;
                    cnt--;
                }
            }
        } else {
            if (edx != 0u) {
                uint32_t ptr = ecx_init;
                uint32_t cnt = edx;
                while (cnt != 0u) {
                    /* Process 3 pairs of bytes */
                    for (int i = 0; i < 3; i++) {
                        uint8_t b1 = rd8(ptr + 2u * i + 1u);
                        uint32_t idx_tbl = (uint32_t)b1 >> (bl_param5 & 0x1Fu);
                        uint32_t tbl_ptr = rd32(esi + idx_tbl * 4u);
                        uint8_t b0 = rd8(ptr + 2u * i);
                        uint16_t wv = rd16(tbl_ptr + (uint32_t)b0 * 2u);
                        wr8(ptr + 2u * i + 1u, (uint8_t)(wv & 0xFFu));
                        wr8(ptr + 2u * i, (uint8_t)((wv >> 8) & 0xFFu));
                    }
                    ptr += 6u;
                    cnt--;
                }
            }
        }
    } else if (ebx_stride == 4u) {
        /* Path: stride==4 */
        if (cl == 8u) {
            if (edx != 0u) {
                uint32_t ptr = ecx_init;
                uint32_t cnt = edx;
                while (cnt != 0u) {
                    wr8(ptr, rd8((uint32_t)rd8(ptr) + eax));
                    ptr += 2u;
                    cnt--;
                }
            }
        } else {
            if (edx != 0u) {
                uint32_t ptr = ecx_init;
                uint32_t cnt = edx;
                while (cnt != 0u) {
                    uint8_t b1 = rd8(ptr + 1u);
                    uint32_t idx_tbl = (uint32_t)b1 >> (bl_param5 & 0x1Fu);
                    uint32_t tbl_ptr = rd32(esi + idx_tbl * 4u);
                    uint8_t b0 = rd8(ptr);
                    uint16_t wv = rd16(tbl_ptr + (uint32_t)b0 * 2u);
                    wr8(ptr + 1u, (uint8_t)(wv & 0xFFu));
                    wr8(ptr, (uint8_t)((wv >> 8) & 0xFFu));
                    ptr += 4u;
                    cnt--;
                }
            }
        }
    } else if (ebx_stride == 6u) {
        /* Path: stride==6 */
        if (cl == 8u) {
            if (edx != 0u) {
                uint32_t ptr = ecx_init;
                uint32_t cnt = edx;
                while (cnt != 0u) {
                    wr8(ptr, rd8((uint32_t)rd8(ptr) + eax));
                    wr8(ptr + 1u, rd8((uint32_t)rd8(ptr + 1u) + eax));
                    wr8(ptr + 2u, rd8((uint32_t)rd8(ptr + 2u) + eax));
                    ptr += 4u;
                    cnt--;
                }
            }
        } else {
            if (edx != 0u) {
                uint32_t ptr = ecx_init;
                uint32_t cnt = edx;
                while (cnt != 0u) {
                    /* Process 3 pairs of bytes */
                    for (int i = 0; i < 3; i++) {
                        uint8_t b1 = rd8(ptr + 2u * i + 1u);
                        uint32_t idx_tbl = (uint32_t)b1 >> (bl_param5 & 0x1Fu);
                        uint32_t tbl_ptr = rd32(esi + idx_tbl * 4u);
                        uint8_t b0 = rd8(ptr + 2u * i);
                        uint16_t wv = rd16(tbl_ptr + (uint32_t)b0 * 2u);
                        wr8(ptr + 2u * i + 1u, (uint8_t)(wv & 0xFFu));
                        wr8(ptr + 2u * i, (uint8_t)((wv >> 8) & 0xFFu));
                    }
                    ptr += 8u;
                    cnt--;
                }
            }
        }
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c1700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);
    const uint32_t param3 = rd32(sp0 + 12u);
    const uint32_t param4 = rd32(sp0 + 16u);
    const uint32_t param5 = rd32(sp0 + 20u);
    cow_fn_102c1700(g, param1, param2, param3, param4, param5);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
