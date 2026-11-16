/* f_0x102b2580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102b2580(Guest* g)
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
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, COW_IMG(0x1036bf68u));
    wr32(sp0 - 0x10u, arg3);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg3, COW_IMG(0x1036bf68u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_102b25bf;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0xcu, 0x3f3u);
    wr32(sp0 - 0x10u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x18u, arg3);
    wr32(sp0 - 0x1cu, COW_IMG(0x103b9960u));
    g->edx = t6;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9960u), arg3);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_102b25bf: ;
    wr32(sp0 - 0xcu, sp0 + 0xcu);
    wr32(sp0 - 0x10u, esi);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x1029cb00u), ecx, 2, esi, sp0 + 0xcu);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_102b25fc;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    wr32(sp0 - 0xcu, 0x3f7u);
    wr32(sp0 - 0x10u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x18u, arg3);
    wr32(sp0 - 0x1cu, COW_IMG(0x103b994cu));
    g->ecx = t13;
    g->edx = t14;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b994cu), arg3);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x20u, esi);
    g->edi = arg3;
    t17 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t16, 1, 3, esi, COW_IMG(0x103b994cu), arg3);
    t18 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t18;
    return t17;
L_102b25fc: ;
    if (arg3 != 0x150002u) goto L_102b2632;
    wr32(sp0 - 0xcu, esi);
    wr32(sp0 - 0x10u, arg2);
    g->ecx = arg2;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t19 = cow_cdecl(g, COW_IMG(0x102b2670u), 2, arg2, esi);
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 == 0u)
    {
        ecx = t20;
        edx = t21;
        goto L_102b2658;
    }
    eax = t19;
    ecx = t20;
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x10u, arg1);
    g->ecx = ecx;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x1029a3a0u), eax, g->ecx, g->edx, 1, 2, arg1, eax);
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0xcu, esi);
    g->edi = arg3;
    g->esp = sp0;
    t24 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t23, 1, 3, esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
    t25 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t25;
    return t24;
L_102b2632: ;
    wr32(sp0 - 0xcu, 0x400u);
    wr32(sp0 - 0x10u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x18u, arg3);
    wr32(sp0 - 0x1cu, COW_IMG(0x103bfc1cu));
    g->ecx = t26;
    g->edx = t27;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bfc1cu), arg3);
    t28 = g->ecx;
    t29 = g->edx;
    ecx = t28;
    edx = t29;
L_102b2658: ;
    wr32(sp0 - 0xcu, esi);
    g->edi = arg3;
    g->esp = sp0;
    t30 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
    t31 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t31;
    return t30;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b2580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b2580(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
