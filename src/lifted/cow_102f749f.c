/* f_0x102f749f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102f749f(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t1);
    if (arg1 == 0u) goto L_102f7511;
    edi = t1;
    if (rd32(arg1 + 0x1cu) == 0u) goto L_102f7511;
    eax = rd32(arg1 + 0x1cu);
    if (rd32(eax) != 6u) goto L_102f7511;
    t2 = rd32(sp0 + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x10308ddfu), 4, 1u, t2, edi, in_edi);
    t4 = g->edx;
    if (t3 == rd32(arg1 + 0x30u)) goto L_102f74d4;
    edx = t4;
    loc_10 = 0xfffffffdu;
L_102f7513: ;
    eax = loc_10;
L_102f7514: ;
    g->edx = edx;
    return eax;
L_102f74d4: ;
    t5 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 0x30u, 1u);
    if (edi < 1u << (rd32(t5 + 0x10u) & 0x1fu))
    {
        eax = t5;
        ecx = rd32(t5 + 0x10u);
        edx = rd32(sp0 + 0xcu);
    }
    else
    {
        eax = t5;
        ecx = rd32(t5 + 0x10u);
        edx = 1u << (rd32(t5 + 0x10u) & 0x1fu);
        wr32(sp0 + 8u, edi + rd32(sp0 + 8u) - edx + 1u);
        edx = edx - 1u;
    }
    t6 = rd32(sp0 + 8u);
    t7 = rd32(eax + 0x14u);
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10308da1u), 6, t7, t6, edx, in_edi, in_esi, in_ebp);
    t8 = g->edx;
    wr32(rd32(arg1 + 0x1cu), 7u);
    eax = 0u;
    edx = t8;
    goto L_102f7514;
L_102f7511: ;
    edx = in_edx;
    loc_10 = 0xfffffffeu;
    goto L_102f7513;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f749f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f749f(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
