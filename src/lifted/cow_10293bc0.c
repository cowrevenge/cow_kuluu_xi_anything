/* f_0x10293bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10293bc0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, arg1);
    wr32(sp0 - 0x10u, sp0 + 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10293d20u), 2, sp0 + 4u, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        ebx = t1;
        goto L_10293bdd;
    }
    eax = t1;
    return eax;
L_10293bdd: ;
    wr32(sp0 - 0xcu, in_ebp);
    if (arg1 == 0u) goto L_10293cde;
    wr32(sp0 - 0x10u, 0x5aeu);
    wr32(sp0 - 0x14u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x18u, 4u);
    t4 = rd32(ebx + 0x1cu);
    wr32(sp0 - 0x1cu, t4);
    g->ecx = t4;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t4, 4u, COW_IMG(0x103bb254u), 0x5aeu, in_ebp);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(ebx + 0x34u, t5);
    if ((int32_t)rd32(ebx + 0x1cu) <= 0)
    {
        eax = rd32(ebx + 0x1cu);
        ecx = t6;
        edx = t7;
        goto L_10293d0e;
    }
    ecx = t6;
    edx = t7;
    wr32(sp0 - 0x10u, in_esi);
    ebp = 0u;
L_10293c13: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_stdcall(g, COW_IMG(0x10293ed0u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, t8 + 8u);
    g->ecx = t9;
    g->edx = t10;
    cow_cdecl(g, COW_IMG(0x10292420u), 4, t8 + 8u, 4u, 1u, arg1);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 4u);
    wr32(sp0 - 0x30u, t8 + 0xcu);
    g->ecx = t11;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, t8 + 0xcu, 4u, 1u, arg1, rd32(sp0 - 0x20u), 4u, 1u, arg1, in_esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t13 = g->ecx;
    if (rd32(t8 + 0xcu) != 2u)
    {
        eax = rd32(t8 + 0xcu);
        ecx = t13;
        esi = t8;
        if (eax != 4u)
        {
            if (eax != 8u)
            {
                if (eax == 0x10u)
                {
                    eax = COW_IMG(0x102935e0u);
                }
                else
                {
                    eax = COW_IMG(0x102934d0u);
                }
            }
            else
            {
                eax = COW_IMG(0x102935b0u);
            }
        }
        else
        {
            eax = COW_IMG(0x10293560u);
        }
    }
    else
    {
        ecx = t13;
        esi = t8;
        eax = COW_IMG(0x102934e0u);
    }
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, esi + 0x10u);
    wr32(esi + 0x14u, eax);
    g->ecx = ecx;
    g->edx = esi + 0x10u;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10292420u), 4, esi + 0x10u, 4u, 1u, arg1);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 4u);
    wr32(sp0 - 0x30u, esi);
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, esi, 4u, 1u, arg1, rd32(sp0 - 0x20u), 4u, 1u, arg1, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x34u, 0x5bbu);
    wr32(sp0 - 0x38u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x3cu, 1u);
    t18 = rd32(esi + 8u);
    wr32(sp0 - 0x40u, t18);
    g->edx = t17;
    g->esp = sp0 - 0x2cu;
    t19 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t18, 1u, COW_IMG(0x103bb254u), 0x5bbu, rd32(sp0 - 0x30u));
    t20 = g->edx;
    wr32(sp0 - 0x44u, arg1);
    t21 = rd32(esi + 8u);
    wr32(sp0 - 0x48u, t21);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, t19);
    wr32(esi + 4u, t19);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, t19, 1u, t21, arg1, rd32(sp0 - 0x40u), 1u, COW_IMG(0x103bb254u), 0x5bbu, rd32(sp0 - 0x30u), 4u, 1u);
    t22 = rd32(ebx + 0x34u);
    wr32(ebp * 4u + t22, esi);
    t23 = rd32(esi);
    wr32(ebp * 4u + rd32(ebx + 0x38u), t23);
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(ebx + 0x1cu))
    {
        ecx = t23;
        edx = t22;
        ebp = ebp + 1u;
        goto L_10293c13;
    }
    eax = rd32(ebx + 0x1cu);
    ecx = t23;
    edx = t22;
    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0x14u, ebx);
    t24 = rd32(sp0 - 0x10u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10293e60u), 3, ebx, arg1, rd32(sp0 - 0xcu));
    g->ebx = rd32(sp0 - 4u);
    g->esi = t24;
    g->edi = rd32(sp0 - 8u);
    g->ebp = rd32(sp0 - 0xcu);
    return ebx;
L_10293cde: ;
    wr32(sp0 - 0x10u, 0x5c5u);
    wr32(sp0 - 0x14u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x18u, 4u);
    t25 = rd32(ebx + 0x1cu) * rd32(ebx + 0x24u);
    wr32(sp0 - 0x1cu, t25);
    g->edx = t25;
    g->esp = sp0 - 8u;
    t26 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t25, 4u, COW_IMG(0x103bb254u), 0x5c5u, in_ebp);
    t27 = g->edx;
    wr32(sp0 - 0x20u, arg1);
    t28 = rd32(ebx + 0x1cu) * rd32(ebx + 0x24u);
    wr32(sp0 - 0x24u, t28);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, t26);
    wr32(ebx + 0x2cu, t26);
    g->ecx = t28;
    g->edx = t27;
    g->esp = sp0;
    t29 = cow_cdecl(g, COW_IMG(0x10292420u), 11, t26, 4u, t28, arg1, rd32(sp0 - 0x1cu), 4u, COW_IMG(0x103bb254u), 0x5c5u, in_ebp, in_edi, in_ebx);
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
L_10293d0e: ;
    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0x14u, ebx);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10293e60u), 3, ebx, arg1, rd32(sp0 - 0xcu));
    g->ebx = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->ebp = rd32(sp0 - 0xcu);
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10293bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10293bc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
