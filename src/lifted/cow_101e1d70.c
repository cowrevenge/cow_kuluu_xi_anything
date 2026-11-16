/* f_0x101e1d70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101e1d70(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101e1d00u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t3;
        esi = t1;
        goto L_101e1d8a;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x101e1d40u), ecx, 0);
    t5 = g->edx;
    if (t4 == 0u) goto L_101e1db4;
    eax = t4;
    edx = t5;
    esi = t4;
L_101e1d8a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x101e1eb0u), self, 1, esi);
    t7 = g->edx;
    t8 = g->cf;
    t9 = g->pf;
    t10 = g->af;
    t11 = g->zf;
    t12 = g->sf;
    t13 = g->of;
    g->edx = t7;
    t14 = cow_thiscall(g, COW_IMG(0x101e1f10u), self, 0);
    t15 = g->edx;
    g->cf = g->cf;
    g->pf = g->pf;
    g->af = g->af;
    g->zf = g->zf;
    g->sf = g->sf;
    g->of = g->of;
    cow_thiscall(g, COW_IMG(0x101e28b0u), esi, 1, arg1);
    wr32(esi + 0x20u, t14);
    wr32(esi, 3u);
    wr32(self, esi);
L_101e1db4: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1d70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e1d70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
