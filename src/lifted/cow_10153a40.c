/* f_0x10153a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_10153a40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 168u);

    wr32(sp0 - 0x84u, in_ebx);
    wr32(sp0 - 0x88u, in_esi);
    wr32(sp0 - 0x8cu, in_edi);
    wr32(sp0 - 0x90u, arg4);
    wr32(sp0 - 0x94u, arg3);
    g->edx = in_edx;
    g->esp = sp0 - 0x8cu;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, arg3, arg4);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_10153ae3;
    }
    edx = t2;
    if ((int32_t)arg5 <= 0)
    {
        esi = arg6;
        goto L_10153a89;
    }
    eax = 0u;
    esi = arg6;
L_10153a7b: ;
    t3 = rd32(esi);
    wr32(eax * 4u + sp0 - 0x40u, t3);
    if ((int32_t)(eax + 1u) < (int32_t)arg5)
    {
        eax = eax + 1u;
        esi = esi + 4u;
        goto L_10153a7b;
    }
    edx = t3;
    esi = esi + 4u;
L_10153a89: ;
    wr32(sp0 - 0x90u, arg4);
    t4 = rd32(COW_IMG(0x10578548u) + arg3 * 4u);
    wr32(sp0 - 0x94u, t4);
    g->esp = sp0 - 0x8cu;
    t5 = cow_cdecl(g, COW_IMG(0x10153100u), 2, t4, arg4);
    if ((int16_t)t5 > 0)
    {
        edx = (uint32_t)(int16_t)t5;
        eax = 0u;
        ecx = esi - 4u;
L_10153aa6: ;
        t6 = rd32(ecx + 4u);
        wr32(eax * 4u + sp0 - 0x80u, t6);
        if ((int32_t)(eax + 1u) < (int32_t)edx)
        {
            eax = eax + 1u;
            ecx = ecx + 4u;
            goto L_10153aa6;
        }
    }
    wr32(sp0 - 0x90u, sp0 - 0x80u);
    wr32(sp0 - 0x94u, sp0 - 0x40u);
    wr32(sp0 - 0x98u, arg4);
    wr32(sp0 - 0x9cu, arg3);
    wr32(sp0 - 0xa0u, arg2);
    wr32(sp0 - 0xa4u, arg1);
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x8cu;
    t7 = cow_cdecl(g, COW_IMG(0x10153310u), 6, arg1, arg2, arg3, arg4, sp0 - 0x40u, sp0 - 0x80u);
    t8 = g->edx;
    g->ebx = rd32(sp0 - 0x84u);
    g->esi = rd32(sp0 - 0x88u);
    g->edi = rd32(sp0 - 0x8cu);
    g->edx = t8;
    return t7;
L_10153ae3: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10153a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10153a40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
