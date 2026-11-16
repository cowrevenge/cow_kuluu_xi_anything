/* f_0x102b0e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102b0e20(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr32(COW_IMG(0x109aebdcu), arg2);
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
        goto L_102b0e67;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0 - 0x18u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf95cu), arg2);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_102b0e67: ;
    g->edx = edx;
    t9 = rd32(arg1);
    g->esp = sp0;
    t10 = cow_call_regs(g, COW_IMG(0x1029cd60u), t9, ecx, g->edx, 1, 5, esi, t9, in_edi, in_esi, in_ebx);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_102b0ea7;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t14 = g->ecx;
    t15 = g->edx;
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf948u), arg2);
    t16 = g->ecx;
    t17 = g->edx;
    g->edi = arg2;
    t18 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t17, 1, 3, esi, COW_IMG(0x103bf948u), arg2);
    t19 = g->edx;
    g->edi = in_edi;
    g->edx = t19;
    return t18;
L_102b0ea7: ;
    if (rd32(arg1) != 0x150001u) goto L_102b0ee4;
    if (rd8(COW_IMG(0x103bf8d8u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x103bf8d8u));
        goto L_102b0ecf;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x103bf8d8u));
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, COW_IMG(0x102b0f30u), 0);
    t20 = g->ecx;
    t21 = g->edx;
    g->edi = arg2;
    g->esp = sp0 - 4u;
    t22 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t21, 1, 3, esi, in_edi, in_esi);
    t23 = g->edx;
    g->edi = in_edi;
    g->edx = t23;
    return t22;
L_102b0ecf: ;
    g->ebx = arg1;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, COW_IMG(0x102b1250u), 0);
    t24 = g->ecx;
    t25 = g->edx;
    g->edi = arg2;
    g->esp = sp0 - 4u;
    t26 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t25, 1, 3, esi, in_edi, in_esi);
    t27 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t27;
    return t26;
L_102b0ee4: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t29 = g->edx;
    g->ecx = rd32(arg1);
    g->edx = t29;
    t30 = rd32(arg1);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf930u), t30);
    t31 = g->ecx;
    t32 = g->edx;
    g->edi = arg2;
    g->esp = sp0 - 4u;
    t33 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t32, 1, 3, esi, in_edi, in_esi);
    t34 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t34;
    return t33;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b0e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b0e20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
