/* f_0x102a46f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a46f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, arg1);
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x109a2858u));
    t2 = rd32(rd32(COW_IMG(0x109a2858u)) + 0x3cu);
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x1027d920u), self, 3, arg1, arg2, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)t3 >= 0)
    {
        edi = t2;
        goto L_102a473b;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    wr32(sp0 - 0x10u, 0x243u);
    wr32(sp0 - 0x14u, COW_IMG(0x103bd8d4u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bd8d4u));
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, COW_IMG(0x103bdb7cu));
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdb7cu), arg2);
    return 0u;
L_102a473b: ;
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    wr32(sp0 - 0x1cu, rd32(arg1));
    g->ecx = sp0 + 8u;
    g->edx = rd32(arg1);
    t9 = rd32(arg1);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1027d6e0u), 6, t9, sp0 + 8u, 4u, 1u, in_edi, in_esi);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)arg2 >= 0)
    {
        ecx = t10;
        edx = t11;
        goto L_102a477e;
    }
    ecx = t10;
    edx = t11;
    wr32(sp0 - 0x10u, 0x248u);
    wr32(sp0 - 0x14u, COW_IMG(0x103bd8d4u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = arg2;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t12 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bd8d4u));
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x1cu, COW_IMG(0x103bb614u));
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb614u), COW_IMG(0x103b379cu));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 0u;
L_102a477e: ;
    if (edi == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t15 = cow_stdcall(g, COW_IMG(0x10293fa0u), 0);
        t16 = g->ecx;
        t17 = g->edx;
        ecx = t16;
        edx = t17;
        edi = t15;
    }
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 0x50u);
    wr32(sp0 - 0x18u, rd32(arg1));
    t18 = rd32(arg1);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1031f0f0u), 3, t18, 0x50u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, edi + 0x20u);
    wr32(sp0 - 0x28u, rd32(arg1));
    g->ecx = edi + 0x20u;
    g->edx = rd32(arg1);
    t19 = rd32(arg1);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x1027d6e0u), 6, t19, edi + 0x20u, 4u, 1u, rd32(sp0 - 0x18u), 0x50u);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, edi + 0x1cu);
    wr32(sp0 - 0x38u, rd32(arg1));
    g->edx = t21;
    t22 = rd32(arg1);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x1027d6e0u), 6, t22, edi + 0x1cu, 4u, 1u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t23 = g->edx;
    wr32(sp0 - 0x3cu, 0x253u);
    wr32(sp0 - 0x40u, COW_IMG(0x103bd8d4u));
    wr32(sp0 - 0x44u, 4u);
    t24 = rd32(edi + 0x1cu);
    wr32(sp0 - 0x48u, t24);
    g->ecx = t24;
    g->esp = sp0 - 0x34u;
    t25 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t24, 4u, COW_IMG(0x103bd8d4u), 0x253u, rd32(sp0 - 0x38u));
    t26 = g->ecx;
    t27 = rd32(edi + 0x1cu);
    wr32(edi + 0x34u, t25);
    wr32(sp0 - 0x4cu, t27);
    wr32(sp0 - 0x50u, 4u);
    wr32(sp0 - 0x54u, t25);
    wr32(sp0 - 0x58u, rd32(arg1));
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x1027d6e0u), 6, rd32(arg1), t25, 4u, t27, rd32(sp0 - 0x48u), 4u);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, edi + 0x24u);
    wr32(sp0 - 0x1cu, rd32(arg1));
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1027d6e0u), 6, rd32(arg1), edi + 0x24u, 4u, 1u, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a46f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a46f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
