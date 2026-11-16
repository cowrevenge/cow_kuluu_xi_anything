/* f_0x102b0a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102b0a80(Guest* g)
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
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, COW_IMG(0x1036bf68u));
    wr32(sp0 - 0x18u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg1, COW_IMG(0x1036bf68u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_102b0ac4;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0x14u, 0x5du);
    wr32(sp0 - 0x18u, COW_IMG(0x103bf824u));
    wr32(sp0 - 0x1cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf824u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, COW_IMG(0x103bf8a0u));
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf8a0u), arg1);
    return 0u;
L_102b0ac4: ;
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, esi);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x1029cb00u), ecx, 5, esi, sp0 + 4u, in_edi, in_esi, in_ebx);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_102b0b02;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    wr32(sp0 - 0x14u, 0x61u);
    wr32(sp0 - 0x18u, COW_IMG(0x103bf824u));
    wr32(sp0 - 0x1cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf824u));
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, COW_IMG(0x103bf88cu));
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf88cu), arg1);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x28u, esi);
    g->edi = 0u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t14, 1, 3, esi, COW_IMG(0x103bf88cu), arg1);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return 0u;
L_102b0b02: ;
    if (arg1 == 0xb0001u) goto L_102b0b3f;
    wr32(sp0 - 0x14u, 0x68u);
    wr32(sp0 - 0x18u, COW_IMG(0x103bf824u));
    wr32(sp0 - 0x1cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf824u));
    t16 = g->edx;
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, COW_IMG(0x103bf870u));
    g->ecx = arg1;
    g->edx = t16;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf870u), arg1);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x14u, esi);
    g->edi = 0u;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t18, 1, 3, esi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return 0u;
L_102b0b3f: ;
    wr32(sp0 - 0x14u, esi);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->ecx = ecx;
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10292420u), 4, sp0 - 4u, 4u, 1u, esi);
    t19 = g->ecx;
    t20 = g->edx;
    if ((rd32(sp0 - 4u) & 0x10000u) == 0u)
    {
        eax = rd32(sp0 - 4u);
        ecx = t19;
        edx = t20;
        wr32(sp0 - 0x14u, eax);
        wr32(sp0 - 0x18u, esi);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t24 = cow_cdecl(g, COW_IMG(0x1027ba20u), 2, esi, eax);
        t25 = g->ecx;
        t26 = g->edx;
        eax = t24;
        ecx = t25;
        edx = t26;
    }
    else
    {
        eax = rd32(sp0 - 4u);
        ecx = t19;
        edx = t20;
        wr32(sp0 - 0x14u, eax & 0xfffeffffu);
        wr32(sp0 - 0x18u, esi);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t21 = cow_cdecl(g, COW_IMG(0x1027b7c0u), 2, esi, eax & 0xfffeffffu);
        t22 = g->ecx;
        t23 = g->edx;
        eax = t21;
        ecx = t22;
        edx = t23;
    }
    wr32(sp0 - 0x14u, esi);
    g->edi = eax;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b0a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b0a80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
