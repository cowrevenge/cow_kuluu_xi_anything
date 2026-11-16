/* f_0x101d9200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101d9200(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10663428u));
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x1020a420u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)rd16(rd32(COW_IMG(0x10663428u)) + 0x8c8u) < 1)
    {
        eax = rd32(COW_IMG(0x10663428u));
        ecx = t3;
        edx = t4;
        ebx = t2;
        esi = rd16(rd32(COW_IMG(0x10663428u)) + 0x8c8u);
        goto L_101d922a;
    }
    eax = rd32(COW_IMG(0x10663428u));
    ecx = t3;
    edx = t4;
    ebx = t2;
    esi = rd16(rd32(COW_IMG(0x10663428u)) + 0x8c8u);
    if ((int32_t)esi <= 14) goto L_101d9287;
L_101d922a: ;
    if (esi == 0xfu) goto L_101d9287;
    if (esi == 0x30u) goto L_101d9287;
    if ((int32_t)esi < 16) goto L_101d9244;
    if ((int32_t)esi > 26) goto L_101d9244;
    wr8(self + 0x15u, 1u);
L_101d928b: ;
    if (ebx == 0u) goto L_101d92c1;
    if (rd32(ebx) != 3u)
    {
        eax = rd32(ebx);
        goto L_101d929d;
    }
    eax = rd32(ebx);
    if (rd32(ebx + 8u) != 0u) goto L_101d92a9;
L_101d929d: ;
    if (eax != 4u) goto L_101d92b1;
    if (rd32(ebx + 0xcu) == 0u)
    {
        eax = rd32(ebx + 0xcu);
        goto L_101d92b1;
    }
    eax = rd32(ebx + 0xcu);
L_101d92a9: ;
    wr8(self + 0x14u, 1u);
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_101d9244: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_stdcall(g, COW_IMG(0x101d7760u), 1, esi);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        ebp = t5;
        eax = rd32(rd32(ebp) + 0x864u);
        edx = rd32(ebp);
    }
    else
    {
        edx = t8;
        ebp = t5;
        eax = rd32(rd32(ebp) + 0x25cu);
    }
    g->edi = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x1011ae50u), rd32(self + 8u), 2, 3u, eax);
    t10 = g->edx;
    wr8(self + 0x15u, 2u);
    eax = t9;
    edx = t10;
    goto L_101d928b;
L_101d9287: ;
    wr8(self + 0x15u, 0u);
    goto L_101d928b;
L_101d92b1: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
    t12 = g->edx;
    wr8(self + 0x14u, 0u);
    eax = t11;
    edx = t12;
L_101d92c1: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d9200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d9200(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
