/* f_0x100c4730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_100c4730(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    edx = in_edx;
L_100c4734: ;
    esi = rd32(self + 0x68u);
L_100c4737: ;
    if (esi == 0u) goto L_100c477e;
    g->eax = rd32(esi);
    g->edx = edx;
    t1 = rd32(esi);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), esi, 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        edx = t3;
        goto L_100c476e;
    }
    eax = t2;
    wr32(sp0 - 0xcu, COW_IMG(0x1032b7f8u));
    g->eax = eax;
    g->edx = rd32(esi);
    t4 = rd32(esi);
    g->esp = sp0 - 8u;
    t5 = cow_thiscall_cdecl(g, rd32(t4 + 0x18u), esi, 1, COW_IMG(0x1032b7f8u));
    t6 = g->edx;
    t7 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t5, t6, 1, COW_IMG(0x1032b7f8u));
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        edx = t8;
        goto L_100c476e;
    }
    edx = t8;
    g->eax = rd32(esi);
    g->edx = edx;
    t9 = rd32(esi);
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, rd32(t9 + 0x18u), esi, 0);
    t11 = g->ecx;
    t12 = g->edx;
    if (rd8(t10 + 0x143u) != 0u)
    {
        eax = t10;
        goto L_100c4773;
    }
    edx = t12;
L_100c476e: ;
    esi = rd32(esi + 0x2cu);
    goto L_100c4737;
L_100c4773: ;
    wr32(sp0 - 0xcu, 1u);
    g->edx = rd32(eax);
    t13 = rd32(eax);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(t13 + 0x18u), eax, 1, 1u);
    t14 = g->edx;
    edx = t14;
    goto L_100c4734;
L_100c477e: ;
    if (rd32(self + 0xb4u) == 0u)
    {
        eax = rd32(self + 0xb4u);
    }
    else
    {
        eax = rd32(self + 0xb4u);
        if (rd32(eax) != 0u)
        {
            ecx = rd32(eax);
            wr32(sp0 - 0xcu, arg3);
            wr32(sp0 - 0x10u, 7u);
            wr32(sp0 - 0x14u, sp0 + 0xcu);
            g->edx = sp0 + 0xcu;
            g->esp = sp0 - 8u;
            t15 = cow_thiscall(g, COW_IMG(0x10072290u), ecx, 3, sp0 + 0xcu, 7u, arg3);
            t16 = g->edx;
            if (rd32(t15) == 0u)
            {
                eax = rd32(t15);
            }
            else
            {
                eax = rd32(t15);
                edx = t16;
                if (rd32(eax) != 0u)
                {
                    ecx = rd32(eax);
                    if ((int32_t)(arg2 - arg1) < 600) goto L_100c47c9;
                    if (arg2 == arg1) goto L_100c47c9;
                    wr32(sp0 - 0xcu, arg2 - arg1);
                    wr32(sp0 - 0x10u, self);
                    g->esp = sp0 - 8u;
                    t17 = cow_thiscall(g, COW_IMG(0x10056b20u), ecx, 2, self, arg2 - arg1);
                    eax = t17;
L_100c47d4: ;
                    if (eax != 0u)
                    {
                        wr8(eax + 0x143u, 1u);
                    }
                }
            }
        }
    }
    return eax;
L_100c47c9: ;
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, self);
    wr32(sp0 - 0x18u, self);
    g->esp = sp0 - 8u;
    t18 = cow_call_regs(g, COW_IMG(0x10056c70u), arg2 - arg1, ecx, g->edx, 0, 4, self, self, 0u, 0u);
    eax = t18;
    goto L_100c47d4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c4730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c4730(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
