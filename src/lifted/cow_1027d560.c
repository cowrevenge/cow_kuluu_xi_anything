/* f_0x1027d560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1027d560(Guest* g)
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1 + 0x1cu) * rd32(arg1 + 0x24u);
    g->eax = t1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t1, 4u, COW_IMG(0x103b4584u), 0x1d2u, in_edi);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)rd32(arg1 + 0x24u) <= 0)
    {
        ebx = t2;
    }
    else
    {
        eax = rd32(arg1 + 0x24u);
        ecx = t3;
        edx = t4;
        ebx = t2;
        edi = 0u;
L_1027d58f: ;
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t5 = cow_thiscall_cdecl(g, COW_IMG(0x10292dd0u), ecx, 2, arg1, edi);
        if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
        {
            ecx = 0u;
            edx = rd32(arg1 + 0x1cu);
            goto L_1027d5b5;
        }
        eax = t5;
        ecx = 0u;
        edx = rd32(arg1 + 0x1cu);
L_1027d5a2: ;
        t6 = rd32(eax + ecx * 4u);
        wr32(ebx + ecx * 4u + edx * edi * 4u, t6);
        if ((int32_t)(ecx + 1u) < (int32_t)rd32(arg1 + 0x1cu))
        {
            ecx = ecx + 1u;
            edx = rd32(arg1 + 0x1cu);
            goto L_1027d5a2;
        }
        ecx = ecx + 1u;
        edx = rd32(arg1 + 0x1cu);
L_1027d5b5: ;
        if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x24u))
        {
            eax = rd32(arg1 + 0x24u);
            edi = edi + 1u;
            goto L_1027d58f;
        }
    }
    t7 = rd32(arg1 + 0x20u);
    t8 = rd32(arg1 + 0x1cu);
    t9 = rd32(arg1 + 0x24u);
    g->eax = t9;
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x10294540u), 4, t9, t8, t7, ebx);
    t11 = g->ecx;
    t12 = g->edx;
    if (rd32(arg1 + 0x4cu) == 0u)
    {
        eax = rd32(arg1 + 0x4cu);
        ecx = t11;
        edx = t12;
        edi = t10;
    }
    else
    {
        edx = t12;
        edi = t10;
        if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
        {
            eax = 0u;
            ecx = rd32(arg1 + 0x1cu);
            goto L_1027d5f9;
        }
        eax = 0u;
L_1027d5e5: ;
        t13 = rd32(eax * 4u + rd32(arg1 + 0x4cu));
        t14 = rd32(edi + 0x34u);
        wr32(eax * 4u + t14, t13);
        if ((int32_t)(eax + 1u) < (int32_t)rd32(arg1 + 0x1cu))
        {
            eax = eax + 1u;
            goto L_1027d5e5;
        }
        eax = eax + 1u;
        ecx = rd32(arg1 + 0x1cu);
        edx = t14;
    }
L_1027d5f9: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103b4584u), 0x1ecu);
    t15 = g->edx;
    g->edx = t15;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027d560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027d560(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
