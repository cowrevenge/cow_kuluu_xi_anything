/* f_0x10080210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10080210(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 864u);

    wr32(sp0 - 0x348u, in_esi);
    wr32(sp0 - 0x34cu, in_edi);
    if ((int32_t)arg1 >= 0)
    {
        if ((int32_t)arg1 < 468)
        {
            if (rd32(COW_IMG(0x10662dccu)) != 0u)
            {
                eax = rd32(COW_IMG(0x10662dccu));
                wr32(sp0 - 0x350u, 0x24u);
                g->eax = eax;
                g->esp = sp0 - 0x34cu;
                t1 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x24u);
                t2 = g->edx;
                wr32(sp0 - 0x350u, 0u);
                wr32(sp0 - 0x354u, 0x40u);
                wr32(sp0 - 0x358u, sp0 - 0x340u);
                wr32(sp0 - 0x35cu, (uint16_t)t1);
                g->eax = sp0 - 0x340u;
                g->edx = t2;
                t3 = cow_thiscall(g, COW_IMG(0x101c4740u), rd32(COW_IMG(0x10662dccu)), 4, (uint16_t)t1, sp0 - 0x340u, 0x40u, 0u);
                t4 = g->edx;
                if (t3 == 0x40u)
                {
                    eax = t3;
                    edx = t4;
                    edi = (uint16_t)t1;
                    wr32(sp0 - 0x350u, eax);
                    wr32(sp0 - 0x354u, sp0 - 0x340u);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x34cu;
                    t5 = cow_thiscall(g, COW_IMG(0x10257bc0u), COW_IMG(0x1047d220u), 2, sp0 - 0x340u, eax);
                    t6 = g->ecx;
                    t7 = g->edx;
                    wr32(sp0 - 0x350u, arg1);
                    g->esp = sp0 - 0x344u;
                    t8 = cow_call_regs(g, COW_IMG(0x10080300u), g->eax, g->ecx, t7, 1, 3, arg1, rd32(sp0 - 0x34cu), rd32(sp0 - 0x348u));
                    wr32(sp0 - 0x350u, t8);
                    wr32(sp0 - 0x354u, sp0 - 0x344u);
                    g->edx = sp0 - 0x344u;
                    g->esp = sp0 - 0x34cu;
                    t9 = cow_thiscall(g, COW_IMG(0x10257ca0u), COW_IMG(0x1047d220u), 2, sp0 - 0x344u, t8);
                    t10 = g->edx;
                    if (t9 <= 0x300u)
                    {
                        edx = t10;
                        esi = t9;
                        t11 = rd32(sp0 - 0x344u);
                        wr32(sp0 - 0x350u, t11);
                        wr32(sp0 - 0x354u, esi);
                        wr32(sp0 - 0x358u, sp0 - 0x300u);
                        wr32(sp0 - 0x35cu, edi);
                        g->eax = t11;
                        g->esp = sp0 - 0x34cu;
                        t12 = cow_thiscall(g, COW_IMG(0x101c4740u), rd32(COW_IMG(0x10662dccu)), 4, edi, sp0 - 0x300u, esi, t11);
                        if (t12 == esi)
                        {
                            eax = t12;
                            wr32(sp0 - 0x350u, esi);
                            wr32(sp0 - 0x354u, sp0 - 0x300u);
                            g->edx = sp0 - 0x300u;
                            g->esp = sp0 - 0x34cu;
                            cow_thiscall(g, COW_IMG(0x10257d00u), COW_IMG(0x1047d220u), 2, sp0 - 0x300u, esi);
                            t13 = g->edx;
                            wr32(sp0 - 0x350u, 0u);
                            wr32(sp0 - 0x354u, sp0 - 0x300u);
                            g->eax = sp0 - 0x300u;
                            g->ecx = COW_IMG(0x1047d220u);
                            g->edx = t13;
                            t14 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, sp0 - 0x300u, 0u);
                            t15 = g->ecx;
                            t16 = g->edx;
                            wr32(sp0 - 0x350u, t14);
                            wr32(sp0 - 0x354u, COW_IMG(0x1034f7e0u));
                            cow_cdecl(g, COW_IMG(0x10077e30u), 2, COW_IMG(0x1034f7e0u), t14);
                        }
                    }
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10080210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10080210(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
