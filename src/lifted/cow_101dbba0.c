/* f_0x101dbba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101dbba0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    edx = in_edx;
    esi = 0u;
L_101dbbaf: ;
    g->eax = rd32(self);
    g->edx = edx;
    t1 = rd32(self);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0x54u), self, 0);
    t3 = g->edx;
    if (rd32(COW_IMG(0x1037efd8u) + esi * 4u) == t2)
    {
        eax = t2;
        edx = t3;
        goto L_101dbbd0;
    }
    edx = t3;
    if ((int32_t)(esi + 1u) < 16)
    {
        esi = esi + 1u;
        goto L_101dbbaf;
    }
    return 0x12u;
L_101dbbd0: ;
    if (esi != 0xffffffffu) goto L_101dbbe0;
    return 0x12u;
L_101dbbe0: ;
    esi = esi - 1u;
    edi = 0u;
L_101dbbe4: ;
    if ((int32_t)esi < 0)
    {
        esi = 0xfu;
    }
    t4 = rd32(COW_IMG(0x1037efd8u) + esi * 4u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t5 = cow_fastcall(g, COW_IMG(0x101dbc20u), self, edx, 1, t4);
    t6 = g->edx;
    if ((uint8_t)t5 != 0u) goto L_101dbc12;
    eax = t5;
    edx = t6;
    if ((int32_t)(edi + 1u) < 16)
    {
        esi = esi - 1u;
        edi = edi + 1u;
        goto L_101dbbe4;
    }
    return 0x12u;
L_101dbc12: ;
    return rd32(COW_IMG(0x1037efd8u) + esi * 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dbba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dbba0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
