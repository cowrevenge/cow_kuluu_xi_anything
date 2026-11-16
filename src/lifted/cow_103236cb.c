/* f_0x103236cb - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_103236cb(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_2c;
    uint32_t loc_c;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    t1 = rd16(rd32(sp0 + 4u) + 0xau);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1 & 0x8000u);
    t3 = rd32(t2 + 6u);
    wr32(sp0 - 0x10u, t3);
    t4 = rd32(t2 + 2u);
    wr32(sp0 - 0xcu, t4);
    t5 = rd16(t2) << 0x10u;
    wr32(sp0 - 8u, t5);
    if ((t1 & 0x7fffu) - 0x3fffu != 0xffffc001u)
    {
        ecx = t4;
        ebx = (t1 & 0x7fffu) - 0x3fffu;
        loc_10 = t3;
        loc_c = t4;
        goto L_10323738;
    }
    ecx = t4;
    loc_10 = t3;
    loc_c = t4;
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t6 = cow_cdecl(g, COW_IMG(0x10323623u), 1, sp0 - 0x10u);
    t7 = g->edx;
    if (t6 != 0u)
    {
        esi = 0u;
        goto L_103237f7;
    }
    edx = t7;
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10323617u), 3, sp0 - 0x10u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
L_10323730: ;
    wr32(sp0 - 0x2cu, 2u);
    esi = 0u;
    loc_2c = 2u;
L_10323732: ;
    eax = loc_2c;
L_103237f9: ;
    wr32(sp0 - 0x2cu, 0x1fu);
    if (rd32(arg3 + 0x10u) != 0x40u)
    {
        esi = esi << (0x1fu - rd32(arg3 + 0xcu) & 0x1fu) | (-(rd32(sp0 + 4u) != 0u) & 0x80000000u) | rd32(sp0 - 0x10u);
        edi = rd32(arg3 + 0x10u);
        if (edi == 0x20u)
        {
            wr32(arg2, esi);
        }
    }
    else
    {
        esi = esi << (0x1fu - rd32(arg3 + 0xcu) & 0x1fu) | (-(rd32(sp0 + 4u) != 0u) & 0x80000000u) | rd32(sp0 - 0x10u);
        t27 = rd32(sp0 - 0xcu);
        wr32(arg2 + 4u, esi);
        wr32(arg2, t27);
    }
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 4u);
    return eax;
L_10323738: ;
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x103235fcu), 2, sp0 - 0x1cu, sp0 - 0x10u);
    t8 = g->ecx;
    t9 = g->edx;
    t10 = rd32(arg3 + 8u);
    wr32(sp0 - 0x34u, t10);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = t9;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x10323570u), t8, 4, sp0 - 0x10u, t10, sp0 - 0x1cu, sp0 - 0x10u);
    t12 = g->edx;
    if (t11 == 0u)
    {
        edx = t12;
    }
    else
    {
        edx = t12;
        ebx = ebx + 1u;
    }
    t13 = rd32(arg3 + 4u);
    if ((int32_t)ebx >= (int32_t)(t13 - rd32(arg3 + 8u)))
    {
        eax = t13;
        ecx = t13 - rd32(arg3 + 8u);
        goto L_10323771;
    }
    ecx = t13 - rd32(arg3 + 8u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10323617u), 3, sp0 - 0x10u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
L_103237ad: ;
    goto L_10323730;
L_10323771: ;
    if ((int32_t)ebx > (int32_t)eax) goto L_103237b4;
    wr32(sp0 - 0x2cu, sp0 - 0x1cu);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x103235fcu), 2, sp0 - 0x10u, sp0 - 0x1cu);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x34u, eax - ebx);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->esi = eax - ebx;
    g->ecx = t14;
    g->edx = t15;
    cow_cdecl(g, COW_IMG(0x1032363eu), 4, sp0 - 0x10u, eax - ebx, sp0 - 0x10u, sp0 - 0x1cu);
    t16 = g->ecx;
    t17 = g->edx;
    t18 = rd32(arg3 + 8u);
    wr32(sp0 - 0x3cu, t18);
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    g->edx = t17;
    g->esp = sp0 - 0x30u;
    cow_thiscall_cdecl(g, COW_IMG(0x10323570u), t16, 4, sp0 - 0x10u, t18, sp0 - 0x10u, rd32(sp0 - 0x34u));
    t19 = g->ecx;
    t20 = g->edx;
    t21 = rd32(arg3 + 0xcu) + 1u;
    wr32(sp0 - 0x44u, t21);
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esi = eax - ebx;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x1032363eu), 4, sp0 - 0x10u, t21, sp0 - 0x10u, rd32(sp0 - 0x3cu));
    goto L_103237ad;
L_103237b4: ;
    if ((int32_t)ebx < (int32_t)rd32(arg3)) goto L_103237e0;
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10323617u), 3, sp0 - 0x10u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t22 = g->ecx;
    t23 = g->edx;
    t24 = rd32(arg3 + 0xcu);
    wr32(sp0 - 0x30u, t24);
    wr8(sp0 - 0xdu, rd8(sp0 - 0xdu) | 0x80u);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    g->esi = in_esi;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x1032363eu), 4, sp0 - 0x10u, t24, sp0 - 0x10u, rd32(sp0 - 0x28u));
    wr32(sp0 - 0x2cu, 1u);
    esi = rd32(arg3) + rd32(arg3 + 0x14u);
    loc_2c = 1u;
    goto L_10323732;
L_103237e0: ;
    t25 = rd32(arg3 + 0xcu);
    wr32(sp0 - 0x2cu, t25);
    t26 = rd32(arg3 + 0x14u);
    wr8(sp0 - 0xdu, rd8(sp0 - 0xdu) & 0x7fu);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->esi = ebx + t26;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x1032363eu), 4, sp0 - 0x10u, t25, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    esi = ebx + t26;
L_103237f7: ;
    eax = 0u;
    goto L_103237f9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103236cb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103236cb(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
