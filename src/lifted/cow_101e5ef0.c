/* f_0x101e5ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e5ef0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10663520u)) == 0u) goto L_101e5f5e;
    ecx = rd32(COW_IMG(0x10663520u));
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101e34d0u), ecx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u) goto L_101e5f5e;
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    if (rd8(esi + 2u) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 2u);
        goto L_101e5f3c;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x157u);
    t5 = g->edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101e5e50u), rd8(esi), t4, 0u, 0u, 1u, 0u);
    return;
L_101e5f3c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 8u);
    t7 = g->edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101e5ea0u), rd8(esi), t6, 0u, 0u, 1u, 0u);
L_101e5f5e: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e5ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e5ef0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
