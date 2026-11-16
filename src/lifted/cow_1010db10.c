/* f_0x1010db10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1010db10(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x1cu, self);
    if (rd32(rd32(sp0 + 4u) + 4u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 4u);
        esi = 0u;
    }
    else
    {
        eax = rd32(rd32(sp0 + 4u) + 4u);
        esi = rd32(eax + 4u);
    }
    if (esi != 0u)
    {
        if (rd8(esi) != 0u)
        {
            ecx = 0u;
L_1010db37: ;
            if ((int32_t)ecx >= 1) goto L_1010db5d;
            if (rd8(esi) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi);
                goto L_1010db56;
            }
            eax = (eax & 0xffffff00u) | rd8(esi);
L_1010db42: ;
            if ((uint8_t)eax == 0x2eu) goto L_1010db50;
            if (rd8(esi + 1u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi + 1u);
                esi = esi + 1u;
                goto L_1010db42;
            }
            eax = (eax & 0xffffff00u) | rd8(esi + 1u);
            esi = esi + 1u;
L_1010db56: ;
            if (rd8(esi) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi);
                ecx = ecx + 1u;
                goto L_1010db37;
            }
            eax = (eax & 0xffffff00u) | rd8(esi);
        }
    }
L_1010db5d: ;
    wr32(sp0 - 0x20u, 3u);
    edx = in_edx;
    edi = sp0 - 0xcu;
    loc_20 = 3u;
L_1010db69: ;
    wr32(edi, 0u);
    if (esi != 0u)
    {
        if (rd8(esi) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi);
            if ((uint8_t)eax != 0x2eu)
            {
                ebx = 5u;
L_1010db82: ;
                t1 = rd32(edi) << 6u;
                wr32(edi, t1);
                if (rd8(esi) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(esi);
                    edx = t1;
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(esi);
                    edx = t1;
                    wr32(sp0 - 0x30u, 0x2eu);
                    wr32(sp0 - 0x34u, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t2 = cow_call_regs(g, COW_IMG(0x1010e680u), eax, g->ecx, g->edx, 0, 2, eax, 0x2eu);
                    t3 = g->edx;
                    if ((uint8_t)t2 != 0u)
                    {
                        eax = t2;
                        edx = t3;
                    }
                    else
                    {
                        eax = t2;
                        edx = t3;
                        if (rd8(esi) <= 0x60u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(esi);
                            eax = (uint8_t)eax - 0x20u;
                        }
                        else
                        {
                            eax = (eax & 0xffffff00u) | rd8(esi);
                            eax = (uint8_t)eax - 0x40u;
                        }
                        t4 = rd32(edi) | (eax & 0x3fu);
                        wr32(edi, t4);
                        eax = eax & 0x3fu;
                        esi = esi + 1u;
                    }
                }
                if (ebx != 1u)
                {
                    ebx = ebx - 1u;
                    goto L_1010db82;
                }
            }
        }
    }
    wr32(sp0 - 0x20u, loc_20 - 1u);
    if (loc_20 != 1u)
    {
        eax = loc_20 - 1u;
        edi = edi + 4u;
        loc_20 = loc_20 - 1u;
        goto L_1010db69;
    }
    if (rd32(rd32(sp0 + 4u) + 4u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 4u);
        esi = 0u;
    }
    else
    {
        eax = rd32(rd32(sp0 + 4u) + 4u);
        esi = rd32(eax + 4u);
    }
    if (esi != 0u)
    {
        if (rd8(esi) != 0u)
        {
            ecx = 0u;
L_1010dbef: ;
            if ((int32_t)ecx >= 0) goto L_1010dc14;
            if (rd8(esi) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi);
                goto L_1010dc0d;
            }
            eax = (eax & 0xffffff00u) | rd8(esi);
L_1010dbf9: ;
            if ((uint8_t)eax == 0x2eu) goto L_1010dc07;
            if (rd8(esi + 1u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi + 1u);
                esi = esi + 1u;
                goto L_1010dbf9;
            }
            eax = (eax & 0xffffff00u) | rd8(esi + 1u);
            esi = esi + 1u;
L_1010dc0d: ;
            if (rd8(esi) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi);
                ecx = ecx + 1u;
                goto L_1010dbef;
            }
            eax = (eax & 0xffffff00u) | rd8(esi);
        }
    }
L_1010dc14: ;
    wr32(sp0 + 4u, 3u);
    edi = sp0 - 0x18u;
L_1010dc20: ;
    wr32(edi, 0u);
    if (esi != 0u)
    {
        if (rd8(esi) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi);
            wr32(sp0 - 0x30u, 0x2eu);
            wr32(sp0 - 0x34u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t5 = cow_call_regs(g, COW_IMG(0x1010e680u), eax, g->ecx, g->edx, 0, 2, eax, 0x2eu);
            t6 = g->edx;
            if ((uint8_t)t5 != 0u)
            {
                edx = t6;
            }
            else
            {
                eax = t5;
                ebx = 5u;
L_1010dc45: ;
                t7 = rd32(edi) << 6u;
                wr32(edi, t7);
                if (rd8(esi) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(esi);
                    edx = t7;
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(esi);
                    edx = t7;
                    wr32(sp0 - 0x30u, 0x2eu);
                    wr32(sp0 - 0x34u, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t8 = cow_call_regs(g, COW_IMG(0x1010e680u), eax, g->ecx, g->edx, 0, 2, eax, 0x2eu);
                    t9 = g->edx;
                    if ((uint8_t)t8 != 0u)
                    {
                        eax = t8;
                        edx = t9;
                    }
                    else
                    {
                        eax = t8;
                        edx = t9;
                        if (rd8(esi) <= 0x60u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(esi);
                            eax = (uint8_t)eax - 0x20u;
                        }
                        else
                        {
                            eax = (eax & 0xffffff00u) | rd8(esi);
                            eax = (uint8_t)eax - 0x40u;
                        }
                        t10 = rd32(edi) | (eax & 0x3fu);
                        wr32(edi, t10);
                        eax = eax & 0x3fu;
                        esi = esi + 1u;
                    }
                }
                if (ebx != 1u)
                {
                    ebx = ebx - 1u;
                    goto L_1010dc45;
                }
            }
        }
    }
    t11 = rd32(sp0 + 4u) - 1u;
    t12 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t11);
    if (t12 != 1u)
    {
        eax = t11;
        edi = edi + 4u;
        goto L_1010dc20;
    }
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    wr32(sp0 - 0x34u, sp0 - 0x18u);
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x2cu;
    t13 = cow_thiscall(g, COW_IMG(0x1010d8e0u), self, 2, sp0 - 0x18u, sp0 - 0xcu);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_1010db50: ;
    if (rd8(esi) != 0u)
    {
        esi = esi + 1u;
    }
    goto L_1010db56;
L_1010dc07: ;
    if (rd8(esi) != 0u)
    {
        esi = esi + 1u;
    }
    goto L_1010dc0d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010db10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010db10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
