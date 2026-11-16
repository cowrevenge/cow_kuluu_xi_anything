/* f_0x10274210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10274210(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != rd32(arg1 + 4u))
    {
        eax = rd32(arg1 + 4u);
        goto L_1027422a;
    }
    return arg2;
L_1027422a: ;
    if ((int32_t)rd32(arg1 + 0x14u) >= 0) goto L_1027427a;
    if (eax == 0xffffffffu) goto L_1027427a;
    if ((int32_t)rd32(arg1 + 0x18u) <= 0)
    {
        ecx = rd32(arg1 + 0x18u);
        ebp = 0u;
        goto L_10274256;
    }
    ecx = rd32(arg1 + 0x18u);
    ebp = 0u;
    edi = rd32(arg1 + 0x20u);
L_10274242: ;
    if (rd32(edi) != eax) goto L_1027424b;
    if (rd32(edi + 4u) == arg2) goto L_10274282;
L_1027424b: ;
    if ((int32_t)(ebp + 1u) < (int32_t)ecx)
    {
        ebp = ebp + 1u;
        edi = edi + 0xd8u;
        goto L_10274242;
    }
    ebp = ebp + 1u;
L_10274256: ;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2784u), eax);
    t16 = g->ecx;
    t17 = g->edx;
    t18 = rd32(arg1 + 4u);
    g->ebx = arg2;
    g->ebp = ebp;
    g->eax = t18;
    g->ecx = t16;
    g->edx = t17;
    t19 = cow_cdecl(g, COW_IMG(0x10273ea0u), 5, arg1, t18, 0u, COW_IMG(0x103b2784u), eax);
    t20 = g->ecx;
    t21 = g->edx;
    g->ebx = arg2;
    g->ebp = ebp;
    g->esp = sp0 - 0x20u;
    t22 = cow_cdecl(g, COW_IMG(0x10273ea0u), 5, arg1, arg2, 1u, arg1, t18);
    eax = t22;
L_1027427a: ;
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    return 0xffffffffu;
L_10274282: ;
    g->ebx = arg2;
    g->ebp = ebp;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10273ea0u), 5, arg1, eax, 0u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x1cu;
    t4 = cow_cdecl(g, COW_IMG(0x1027e470u), 1, edi + 8u);
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x20u;
    t7 = cow_call_regs(g, COW_IMG(0x10285800u), t4, g->ecx, g->edx, 1, 2, edi + 0x28u, 0xffu);
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x28u;
    t10 = cow_cdecl(g, COW_IMG(0x1027e1b0u), 3, edi + 0x70u, COW_IMG(0x102742e0u), arg1);
    t11 = g->ecx;
    t12 = g->edx;
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x34u;
    t13 = cow_cdecl(g, COW_IMG(0x1027e470u), 1, edi + 0x70u);
    t14 = g->ecx;
    t15 = g->edx;
    g->esp = sp0 - 0x38u;
    cow_call_regs(g, COW_IMG(0x10285800u), t13, g->ecx, g->edx, 1, 2, edi + 0x90u, 0xffu);
    wr32(arg1 + 0x14u, ebp);
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    return arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10274210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10274210(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
