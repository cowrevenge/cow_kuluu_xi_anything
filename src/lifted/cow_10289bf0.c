/* f_0x10289bf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10289bf0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9684u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)arg2 >= 1)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, in_edi, in_esi);
        t7 = g->ecx;
        t8 = g->edx;
        g->ebx = arg2;
        g->eax = rd32(arg1);
        g->ecx = t7;
        g->edx = t8;
        t9 = rd32(arg1);
        g->esp = sp0 - 0x14u;
        t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9670u), t9);
        t11 = g->ecx;
        t12 = g->edx;
        g->edx = t12;
        t13 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b9670u), t9);
        t14 = g->edx;
        t15 = rd32(arg1 + 4u);
        g->ebx = arg2;
        g->ecx = t15;
        g->edx = t14;
        g->esp = sp0 - 0x20u;
        t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b965cu), t15);
        t17 = g->ecx;
        t18 = g->edx;
        g->ecx = t17;
        t19 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103b965cu), t15);
        t20 = g->ecx;
        t21 = rd32(arg1 + 8u);
        g->ebx = arg2;
        g->edx = t21;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9648u), t21);
        t22 = g->edx;
        if ((int32_t)arg2 >= 2)
        {
            edx = t22;
            if ((int32_t)rd32(arg1 + 4u) > 0)
            {
                ebx = 0u;
                edi = 0u;
L_10289c6d: ;
                t23 = edi + rd32(arg1 + 0xcu);
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_cdecl(g, COW_IMG(0x1029b4b0u), 3, t23, arg2, arg3 + 4u);
                t24 = g->edx;
                if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 4u))
                {
                    edx = t24;
                    ebx = ebx + 1u;
                    edi = edi + 0xcu;
                    goto L_10289c6d;
                }
            }
        }
    }
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10289bf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10289bf0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
