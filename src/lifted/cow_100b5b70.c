/* f_0x100b5b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b5b70(Guest* g)
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10489910u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10489910u));
        goto L_100b5bee;
    }
    eax = rd32(COW_IMG(0x10489910u));
    if (eax == 0x12cu) goto L_100b5ba2;
    wr32(COW_IMG(0x10489910u), 0x12cu);
    wr8(COW_IMG(0x104898f9u), 1u);
    wr8(self + 0x25au, 1u);
    return;
L_100b5ba2: ;
    t1 = rd32(COW_IMG(0x10489918u));
    wr32(COW_IMG(0x10489910u), 0u);
    if (t1 == 0u)
    {
        eax = t1;
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_stdcall(g, COW_IMG(0x100b5c30u), 0);
        t3 = g->edx;
        g->edx = t3;
        t4 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
        t5 = g->ecx;
        t6 = g->edx;
        cow_cdecl(g, COW_IMG(0x1018b3a0u), 1, t4);
        wr8(COW_IMG(0x104898f9u), 1u);
    }
    wr32(COW_IMG(0x10489918u), 0u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    wr8(self + 0x25au, 1u);
    return;
L_100b5bee: ;
    edx = in_edx;
    esi = COW_IMG(0x10480af0u);
L_100b5bf4: ;
    if (rd32(esi) != 0u)
    {
        ecx = rd32(esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t7 = cow_thiscall(g, COW_IMG(0x10092900u), ecx, 0);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    if ((int32_t)(esi + 4u) < (int32_t)COW_IMG(0x10482ef0u))
    {
        esi = esi + 4u;
        goto L_100b5bf4;
    }
    t9 = rd32(COW_IMG(0x10489910u));
    wr8(COW_IMG(0x104898f9u), 1u);
    wr32(COW_IMG(0x10489910u), t9 + 1u);
    wr8(self + 0x25au, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b5b70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b5b70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
