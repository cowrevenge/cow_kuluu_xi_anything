/* f_0x102b0b90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b0b90(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg2, COW_IMG(0x10361d24u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_102b0bd1;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf824u));
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b99c8u), arg2);
    return;
L_102b0bd1: ;
    g->edx = edx;
    t7 = rd32(arg1);
    g->esp = sp0;
    t8 = cow_call_regs(g, COW_IMG(0x1029cd60u), t7, ecx, g->edx, 1, 5, esi, t7, in_edi, in_esi, in_ebx);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_102b0c11;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf824u));
    t12 = g->ecx;
    t13 = g->edx;
    g->ecx = t12;
    g->edx = t13;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b99b4u), arg2);
    t14 = g->ecx;
    t15 = g->edx;
    g->edi = arg1;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t15, 1, 3, esi, COW_IMG(0x103b99b4u), arg2);
    g->edi = in_edi;
    return;
L_102b0c11: ;
    if (rd32(arg1) == 0xb0001u)
    {
        ebx = rd32(arg1);
        goto L_102b0c4a;
    }
    ebx = rd32(arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf824u));
    t17 = g->ecx;
    t18 = g->edx;
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf8bcu), ebx);
    t19 = g->ecx;
    t20 = g->edx;
    g->edi = arg1;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t20, 1, 3, esi, in_edi, in_esi);
    g->edi = in_edi;
    return;
L_102b0c4a: ;
    if (rd8(COW_IMG(0x103bf820u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x103bf820u));
        loc_10 = esi;
        goto L_102b0c6a;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x103bf820u));
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, COW_IMG(0x1027c000u), 0);
    t21 = g->ecx;
    t22 = g->edx;
    g->edi = arg1;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t22, 1, 3, esi, in_edi, in_esi);
    g->edi = in_edi;
    return;
L_102b0c6a: ;
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1027c210u), 2, arg1, loc_10);
    t23 = g->ecx;
    t24 = g->edx;
    g->edi = arg1;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t24, 1, 3, esi, in_edi, in_esi);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b0b90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b0b90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
