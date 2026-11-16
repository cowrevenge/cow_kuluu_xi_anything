/* f_0x102b06f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102b06f0(Guest* g)
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
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
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0x10u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg1, COW_IMG(0x1034f2d0u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_102b072e;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0xcu, 0x5bu);
    wr32(sp0 - 0x10u, COW_IMG(0x103bf7acu));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf7acu));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, COW_IMG(0x103b9960u));
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9960u), arg1);
    return 0u;
L_102b072e: ;
    wr32(sp0 - 0xcu, sp0 + 4u);
    wr32(sp0 - 0x10u, esi);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x1029cb00u), ecx, 2, esi, sp0 + 4u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        edx = t9;
        goto L_102b076a;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    wr32(sp0 - 0xcu, 0x5fu);
    wr32(sp0 - 0x10u, COW_IMG(0x103bf7acu));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf7acu));
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, COW_IMG(0x103b994cu));
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b994cu), arg1);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x20u, esi);
    g->edi = arg1;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t14, 1, 3, esi, COW_IMG(0x103b994cu), arg1);
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return 0u;
L_102b076a: ;
    if (arg1 - 0xa0002u > 7u) goto L_102b0803;
    t15 = rd32(COW_IMG(0x102b0834u) + arg1 * 4u - 0x280008u);
    switch (t15 - RD)
    {
    case 0x102b0786u: goto L_102b0786;
    case 0x102b079fu: goto L_102b079f;
    case 0x102b07b8u: goto L_102b07b8;
    case 0x102b07d1u: goto L_102b07d1;
    case 0x102b07eau: goto L_102b07ea;
    case 0x102b0803u: goto L_102b0803;
    default: rt_fatal(g, COW_IMG(0x102b077fu), "switch");
    }
    return 0;
L_102b0786: ;
    wr32(sp0 - 0xcu, esi);
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t28 = cow_cdecl(g, COW_IMG(0x102ac130u), 1, esi);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0xcu, esi);
    g->edi = t28;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t30, 1, 3, esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return t28;
L_102b079f: ;
    wr32(sp0 - 0xcu, esi);
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t25 = cow_cdecl(g, COW_IMG(0x102b64e0u), 1, esi);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0xcu, esi);
    g->edi = t25;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t27, 1, 3, esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return t25;
L_102b07b8: ;
    wr32(sp0 - 0xcu, esi);
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t22 = cow_cdecl(g, COW_IMG(0x102b5a60u), 1, esi);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0xcu, esi);
    g->edi = t22;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t24, 1, 3, esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return t22;
L_102b07d1: ;
    wr32(sp0 - 0xcu, esi);
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t19 = cow_cdecl(g, COW_IMG(0x102acd60u), 1, esi);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0xcu, esi);
    g->edi = t19;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t21, 1, 3, esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return t19;
L_102b07ea: ;
    wr32(sp0 - 0xcu, esi);
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_cdecl(g, COW_IMG(0x102ae6c0u), 1, esi);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0xcu, esi);
    g->edi = t16;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t18, 1, 3, esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return t16;
L_102b0803: ;
    wr32(sp0 - 0xcu, 0x67u);
    wr32(sp0 - 0x10u, COW_IMG(0x103bf7acu));
    wr32(sp0 - 0x14u, COW_IMG(0x103b27fcu));
    g->eax = arg1 - 0xa0002u;
    g->ecx = arg1;
    g->esp = sp0 - 0xcu;
    t31 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bf7acu));
    t32 = g->ecx;
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, COW_IMG(0x103bf7d8u));
    g->ecx = t32;
    g->edx = arg1;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf7d8u), arg1);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0xcu, esi);
    g->edi = 0u;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t34, 1, 3, esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b06f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b06f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
