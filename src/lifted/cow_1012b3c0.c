/* f_0x1012b3c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012b3c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_c;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        eax = rd32(self + 8u);
        if (rd8(self + 0x53u) == 0u)
        {
            eax = (((eax & 0xffff0000u) | rd16(eax + 0x4cu)) & 0xffffff00u) | rd8(self + 0x53u);
            edx = in_edx;
            ebp = in_ebp;
            edi = in_edi;
        }
        else
        {
            loc_c = (rd32(sp0 - 0xcu) & 0xffff0000u) | rd16(eax + 0x4cu);
            eax = (((eax & 0xffff0000u) | rd16(eax + 0x4cu)) & 0xffffff00u) | rd8(self + 0x53u);
            wr32(sp0 - 0x18u, in_ebp);
            wr32(sp0 - 0x1cu, in_edi);
            edx = in_edx;
            ebp = self + 0x1cu;
            edi = 1u;
L_1012b406: ;
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, edi);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            g->ebx = 0u;
            g->edi = edi;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t1 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, edi, 1u, 1u);
            t2 = g->edx;
            t3 = (t2 & 0xffff0000u) | rd16(ebp);
            wr32(sp0 - 0x20u, t3);
            g->edx = t3;
            t4 = cow_call_regs(g, COW_IMG(0x1012b380u), t1, self, g->edx, 0, 1, t3);
            t5 = g->edx;
            if (t4 == 0u)
            {
                edx = t5;
            }
            else
            {
                eax = t4;
                edx = t5;
                if ((uint32_t)(int16_t)rd16(sp0 - 0xcu) != edi)
                {
                    wr32(sp0 - 0x20u, 0u);
                    wr32(sp0 - 0x24u, 0u);
                    wr32(sp0 - 0x28u, 0x80808080u);
                    t12 = (uint32_t)(int16_t)rd16(sp0 - 6u);
                    wr32(sp0 - 0x2cu, t12);
                    t13 = (uint32_t)(int16_t)rd16(sp0 - 8u);
                    wr32(sp0 - 0x30u, t13);
                    g->edx = t13;
                    g->esp = sp0 - 0x1cu;
                    cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, t13, t12, 0x80808080u, 0u, 0u);
                    t14 = g->edx;
                    edx = t14;
                }
                else
                {
                    if ((int16_t)rd16(rd32(self + 8u) + 0x5eu) <= 0)
                    {
                        wr32(sp0 - 0x20u, 0u);
                        wr32(sp0 - 0x24u, 0u);
                        wr32(sp0 - 0x28u, 0u);
                        wr32(sp0 - 0x2cu, 0x80805020u);
                        wr32(sp0 - 0x30u, 0x3f800000u);
                        wr32(sp0 - 0x34u, 0x3f800000u);
                        t9 = (uint32_t)(int16_t)rd16(sp0 - 6u);
                        wr32(sp0 - 0x38u, t9);
                        t10 = (uint32_t)(int16_t)rd16(sp0 - 8u);
                        wr32(sp0 - 0x3cu, t10);
                        g->edx = t10;
                        g->esp = sp0 - 0x1cu;
                        cow_thiscall(g, COW_IMG(0x1011fc80u), eax, 8, t10, t9, 0x3f800000u, 0x3f800000u, 0x80805020u, 0u, 0u, 0u);
                        t11 = g->edx;
                        edx = t11;
                    }
                    else
                    {
                        ecx = rd32(self + 8u);
                        edx = (edx & 0xffff0000u) | rd16(rd32(self + 8u) + 0x5eu);
                        wr32(sp0 - 0x20u, edx);
                        wr32(sp0 - 0x24u, 0x1eu);
                        t6 = rd32(sp0 - 6u);
                        wr32(sp0 - 0x28u, t6);
                        t7 = rd32(sp0 - 8u);
                        wr32(sp0 - 0x2cu, t7);
                        wr32(sp0 - 0x30u, eax);
                        g->edx = t7;
                        g->esp = sp0 - 0x1cu;
                        cow_thiscall(g, COW_IMG(0x10119f80u), ecx, 5, eax, t7, t6, 0x1eu, edx);
                        t8 = g->edx;
                        edx = t8;
                    }
                }
            }
            if ((int32_t)edi < (int32_t)rd8(self + 0x53u))
            {
                eax = edi;
                ebp = ebp + 2u;
                edi = edi + 1u;
                goto L_1012b406;
            }
            eax = edi;
            ebp = rd32(sp0 - 0x18u);
            edi = rd32(sp0 - 0x1cu);
        }
    }
    g->ebx = in_ebx;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012b3c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012b3c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
