/* f_0x10294810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10294810(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1 + 0x1cu);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t1, 4u, COW_IMG(0x103bb558u), 0x20eu, in_edi);
    t3 = g->edx;
    t4 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 0x30u, t2);
    wr8(arg1 + 0x3cu, 0u);
    g->edx = t3;
    g->esp = sp0 - 0x14u;
    t5 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t4, 1u, COW_IMG(0x103bb558u), 0x218u, t1);
    t6 = g->edx;
    t7 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 0x38u, t5);
    if ((int32_t)t7 <= 0)
    {
        ecx = t7;
        edx = t6;
        goto L_10294866;
    }
    eax = 0u;
L_10294856: ;
    t8 = rd32(arg1 + 0x38u);
    wr8(eax + t8, 0u);
    if ((int32_t)(eax + 1u) < (int32_t)rd32(arg1 + 0x1cu))
    {
        eax = eax + 1u;
        goto L_10294856;
    }
    ecx = rd32(arg1 + 0x1cu);
    edx = t8;
L_10294866: ;
    if ((int32_t)rd32(arg1 + 0x1cu) <= 0) goto L_10294881;
    eax = rd32(arg1 + 0x1cu);
    edi = 0u;
L_1029486f: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10294500u), 2, arg1, edi);
    t9 = g->ecx;
    t10 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x1cu))
    {
        eax = rd32(arg1 + 0x1cu);
        ecx = t9;
        edx = t10;
        edi = edi + 1u;
        goto L_1029486f;
    }
L_10294881: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10294810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10294810(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
