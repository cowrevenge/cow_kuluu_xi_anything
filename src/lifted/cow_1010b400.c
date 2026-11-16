/* f_0x1010b400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1010b400(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1) == 0u) goto L_1010b488;
    t1 = rd32(self + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10112810u), self, 5, arg1, 0u, COW_IMG(0x1036bf24u), COW_IMG(0x1036bf1cu), t1);
    t2 = g->edx;
    edx = t2;
    esi = rd32(self + 0x3cu);
L_1010b427: ;
    if (rd32(esi + 4u) == 0u) goto L_1010b448;
    if (rd32(esi + 8u) == 0u) goto L_1010b448;
    eax = rd32(esi + 8u);
    g->edx = rd32(rd32(esi));
    t3 = rd32(rd32(esi));
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(t3 + 0xcu), rd32(esi), 1, arg1);
    t4 = g->edx;
    if (rd32(esi + 8u) == 0u)
    {
        edx = t4;
    }
    else
    {
        eax = rd32(esi + 8u);
        edx = t4;
        esi = eax;
    }
    goto L_1010b427;
L_1010b448: ;
    esi = rd32(self + 0x60u);
L_1010b44b: ;
    if (rd32(esi + 4u) == 0u) goto L_1010b46c;
    if (rd32(esi + 8u) == 0u) goto L_1010b46c;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(rd32(esi)) + 0xcu), rd32(esi), 1, arg1);
    t5 = g->edx;
    if (rd32(esi + 8u) == 0u)
    {
        edx = t5;
    }
    else
    {
        eax = rd32(esi + 8u);
        edx = t5;
        esi = eax;
    }
    goto L_1010b44b;
L_1010b46c: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x10112780u), self, 4, arg1, 0u, COW_IMG(0x1036bf28u), COW_IMG(0x1036bf1cu));
    t7 = g->edx;
    g->edx = t7;
    return (t6 & 0xffffff00u) | 1u;
L_1010b488: ;
    return in_eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010b400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010b400(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
