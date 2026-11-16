/* f_0x101d2a10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101d2a10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x101d29c0u), 2, 4u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_101d2ac2;
    }
    ecx = t2;
    edx = t3;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, ecx, edx, 1, 2, COW_IMG(0x10663190u), COW_IMG(0x1037eb84u));
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        edx = t6;
        goto L_101d2ab7;
    }
    ecx = t5;
    edx = t6;
    g->esp = sp0;
    t7 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, ecx, edx, 1, 2, COW_IMG(0x10663190u), COW_IMG(0x1037eb7cu));
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        ecx = t8;
        edx = t9;
        goto L_101d2a5f;
    }
    edx = t9;
    wr32(rd32(COW_IMG(0x10456a28u)) + 8u, 1u);
    g->edx = edx;
    return 1u;
L_101d2a5f: ;
    g->esp = sp0;
    t10 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, ecx, edx, 1, 2, COW_IMG(0x10663190u), COW_IMG(0x1037eb74u));
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        ecx = t11;
        edx = t12;
        goto L_101d2a84;
    }
    edx = t12;
    wr32(rd32(COW_IMG(0x10456a28u)) + 8u, 2u);
    g->edx = edx;
    return 2u;
L_101d2a84: ;
    g->esp = sp0;
    t13 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, ecx, edx, 1, 2, COW_IMG(0x10663190u), COW_IMG(0x1037eb6cu));
    t14 = g->edx;
    if (t13 != 0u)
    {
        edx = t14;
        goto L_101d2aa9;
    }
    edx = t14;
    wr32(rd32(COW_IMG(0x10456a28u)) + 8u, 3u);
    g->edx = edx;
    return 3u;
L_101d2aa9: ;
    if ((int32_t)(rd32(rd32(COW_IMG(0x10456a28u)) + 8u) + 1u) < 4)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u) + 1u;
        goto L_101d2ab9;
    }
L_101d2ab7: ;
    eax = 0u;
L_101d2ab9: ;
    wr32(rd32(COW_IMG(0x10456a28u)) + 8u, eax);
L_101d2ac2: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d2a10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d2a10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
