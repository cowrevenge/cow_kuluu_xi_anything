/* f_0x10167650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10167650(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (arg2 == 0u)
    {
        eax = in_eax;
    }
    else
    {
        if (rd32(arg2 + 0x1acu) == 0u)
        {
            eax = rd32(arg2 + 0x1acu);
        }
        else
        {
            eax = rd32(arg2 + 0x1acu);
            if ((int32_t)rd32(self + 4u) < 32)
            {
                ecx = rd32(self + 4u);
                wr32(sp0 - 0x14u, 0x74616577u);
                wr32(sp0 - 0x18u, 1u);
                t1 = ecx * 0x8cu + self + 8u;
                edi = t1;
                eax = 0u;
                ecx = 0x23u;
                while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr32(sp0 - 0x1cu, sp0 + 8u);
                g->edx = in_edx;
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, COW_IMG(0x10072290u), rd32(arg2 + 0x1acu), 3, sp0 + 8u, 1u, 0x74616577u);
                t2 = g->edx;
                if (arg2 == 0u)
                {
                    edx = t2;
                    esi = t1;
                }
                else
                {
                    edx = t2;
                    esi = t1;
                    if (rd32(arg2) != 0u)
                    {
                        eax = rd32(arg2);
                        wr32(sp0 - 0x14u, arg1);
                        wr32(sp0 - 0x18u, 1u);
                        wr32(sp0 - 0x1cu, sp0 + 8u);
                        g->edx = sp0 + 8u;
                        g->esp = sp0 - 0x10u;
                        cow_thiscall(g, COW_IMG(0x10072290u), eax, 3, sp0 + 8u, 1u, arg1);
                        t3 = g->edx;
                        if (arg2 == 0u)
                        {
                            edx = t3;
                        }
                        else
                        {
                            edx = t3;
                            if (rd32(arg2) != 0u)
                            {
                                ecx = rd32(arg2);
                                wr32(sp0 - 0x14u, 0x6d72666bu);
                                wr32(sp0 - 0x18u, 1u);
                                wr32(sp0 - 0x1cu, sp0 + 8u);
                                g->edx = edx;
                                g->esp = sp0 - 0x10u;
                                t4 = cow_call_regs(g, COW_IMG(0x100724c0u), sp0 + 8u, ecx, g->edx, 0, 3, sp0 + 8u, 1u, 0x6d72666bu);
                                t5 = g->edx;
                                if (rd32(t4) == 0u)
                                {
                                    edx = t5;
                                    eax = 0u;
                                }
                                else
                                {
                                    eax = rd32(t4);
                                    edx = t5;
                                    eax = rd32(eax);
                                }
                                wr32(esi + 4u, eax);
                            }
                        }
                    }
                }
                if (rd32(esi + 4u) != 0u)
                {
                    eax = rd32(esi + 4u);
                    goto L_10167749;
                }
                wr32(sp0 - 0x14u, 0x65646f6du);
                wr32(sp0 - 0x18u, 1u);
                wr32(sp0 - 0x1cu, sp0 + 8u);
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, COW_IMG(0x10072290u), rd32(arg2 + 0x1acu), 3, sp0 + 8u, 1u, 0x65646f6du);
                if (arg2 == 0u)
                {
                    eax = arg2;
                    goto L_101677ab;
                }
                wr32(sp0 - 0x14u, 0x6d72666bu);
                wr32(sp0 - 0x18u, 1u);
                wr32(sp0 - 0x1cu, sp0 + 8u);
                g->edx = sp0 + 8u;
                g->esp = sp0 - 0x10u;
                t6 = cow_call_regs(g, COW_IMG(0x100724c0u), arg2, rd32(arg2), g->edx, 0, 3, sp0 + 8u, 1u, 0x6d72666bu);
                t7 = g->edx;
                if (rd32(t6) == 0u)
                {
                    edx = t7;
                    eax = 0u;
                }
                else
                {
                    eax = rd32(t6);
                    edx = t7;
                    eax = rd32(eax);
                }
                wr32(esi + 4u, eax);
L_10167749: ;
                if (rd32(esi + 4u) == 0u) goto L_101677ab;
                ecx = rd32(esi + 4u);
L_10167750: ;
                wr32(sp0 - 0x14u, 0u);
                wr32(sp0 - 0x18u, 0x19u);
                wr32(sp0 - 0x1cu, sp0 + 8u);
                g->esp = sp0 - 0x10u;
                t8 = cow_call_regs(g, COW_IMG(0x100724c0u), sp0 + 8u, ecx, g->edx, 0, 3, sp0 + 8u, 0x19u, 0u);
                if (rd32(t8) == 0u) goto L_10167798;
                eax = rd32(t8);
                if (rd32(eax) == 0u) goto L_10167798;
                ecx = rd32(eax);
                t9 = rd32(esi + 0x88u) + 1u;
                t10 = rd32(esi + 0x88u);
                t11 = rd32(ecx + 0x14u);
                wr32(esi + 0x88u, t9);
                wr32(esi + t10 * 4u + 8u, t11);
                if ((int32_t)rd32(esi + 0x88u) >= 32) goto L_10167798;
                edx = t11;
                if (rd32(ecx + 8u) == 0u)
                {
                    ecx = 0u;
                }
                else
                {
                    ecx = rd32(ecx + 8u);
                    ecx = rd32(ecx);
                }
                goto L_10167750;
            }
        }
    }
L_101677ab: ;
    return eax;
L_10167798: ;
    if (rd32(esi + 0x88u) == 0u)
    {
        eax = rd32(esi + 0x88u);
    }
    else
    {
        wr32(esi, arg1);
        t12 = rd32(self + 4u) + 1u;
        wr32(self + 4u, t12);
        eax = t12;
    }
    goto L_101677ab;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10167650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10167650(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
