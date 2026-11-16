/* f_0x102b3d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102b3d90(Guest* g)
{
    uint32_t ebp;
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
    uint32_t t2;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ebx = arg2;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x10292200u), 4, arg1 + 0x14u, 4u, 1u, arg2);
    t2 = g->ecx;
    t3 = g->edx;
    g->ebx = arg2;
    g->edx = t3;
    g->esp = sp0 - 0x20u;
    t4 = cow_cdecl(g, COW_IMG(0x10292200u), 4, arg1 + 0x18u, 4u, 1u, arg2);
    t5 = g->edx;
    g->ebx = arg2;
    g->ecx = arg1 + 0x1cu;
    g->esp = sp0 - 0x30u;
    t6 = cow_cdecl(g, COW_IMG(0x10292200u), 4, arg1 + 0x1cu, 4u, 1u, arg2);
    t7 = g->ecx;
    g->ebx = arg2;
    g->ecx = t7;
    g->edx = arg1 + 0x20u;
    g->esp = sp0 - 0x40u;
    t8 = cow_cdecl(g, COW_IMG(0x10292200u), 4, arg1 + 0x20u, 4u, 1u, arg2);
    t9 = g->ecx;
    t10 = g->edx;
    if (rd32(arg1 + 0x2cu) == 0u)
    {
        edi = t1 + t4 + t6 + t8;
    }
    else
    {
        ecx = t9;
        edx = t10;
        edi = t1 + t4 + t6 + t8;
        if ((int32_t)rd32(arg1 + 0x14u) <= 0) goto L_102b3e0b;
        ebp = 0u;
L_102b3def: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t11 = cow_cdecl(g, COW_IMG(0x102b3be0u), 2, arg1, ebp);
        t12 = g->ecx;
        t13 = g->edx;
        g->edx = t13;
        t14 = cow_thiscall_cdecl(g, rd32(arg1 + 0x2cu), t12, 1, t11);
        t15 = g->ecx;
        t16 = g->edx;
        if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x14u))
        {
            ecx = t15;
            edx = t16;
            ebp = ebp + 1u;
            edi = edi + t14;
            goto L_102b3def;
        }
        edi = edi + t14;
    }
L_102b3e0b: ;
    g->ebx = in_ebx;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b3d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b3d90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
