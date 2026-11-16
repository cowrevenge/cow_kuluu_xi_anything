/* f_0x1028bec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1028bec0(Guest* g)
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
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, COW_IMG(0x1036bf68u));
    wr32(sp0 - 0x14u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg1, COW_IMG(0x1036bf68u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_1028bf05;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0x10u, 0x86u);
    wr32(sp0 - 0x14u, COW_IMG(0x103b98f8u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b98f8u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, COW_IMG(0x103b9960u));
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9960u), arg1);
    return 0u;
L_1028bf05: ;
    wr32(sp0 - 0x10u, sp0 + 4u);
    wr32(sp0 - 0x14u, esi);
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x1029cb00u), ecx, 5, esi, sp0 + 4u, in_edi, in_esi, in_ebx);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_1028bf45;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    wr32(sp0 - 0x10u, 0x8au);
    wr32(sp0 - 0x14u, COW_IMG(0x103b98f8u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b98f8u));
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, COW_IMG(0x103b994cu));
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b994cu), arg1);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x24u, esi);
    g->edi = 0u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t14, 1, 3, esi, COW_IMG(0x103b994cu), arg1);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 0u;
L_1028bf45: ;
    if (arg1 == 0x1c0001u) goto L_1028bf84;
    wr32(sp0 - 0x10u, 0x90u);
    wr32(sp0 - 0x14u, COW_IMG(0x103b98f8u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b98f8u));
    t16 = g->edx;
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, COW_IMG(0x103b9934u));
    g->ecx = arg1;
    g->edx = t16;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9934u), arg1);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x10u, esi);
    g->edi = 0u;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t18, 1, 3, esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 0u;
L_1028bf84: ;
    wr32(sp0 - 0x10u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t19 = cow_stdcall(g, COW_IMG(0x10278450u), 0);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x10u, esi);
    g->edi = t19;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t21, 1, 3, esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return t19;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028bec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1028bec0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
