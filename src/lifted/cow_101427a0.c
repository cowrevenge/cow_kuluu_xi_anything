/* f_0x101427a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101427a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101f7100u), arg1, 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        goto L_101427c2;
    }
    eax = t1;
    edx = t2;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, eax, 1u);
    return;
L_101427c2: ;
    if (rd32(arg1 + 0x38u) == 0u)
    {
        edx = rd32(arg1 + 0x38u);
        goto L_101427e4;
    }
    edx = rd32(arg1 + 0x38u);
    if ((int32_t)eax >= (int16_t)rd16(arg1 + 0x20u)) goto L_101427e4;
    if (eax * 0x54u + edx != 0u)
    {
        eax = eax * 0x54u + edx;
        goto L_101427f7;
    }
    eax = eax * 0x54u + edx;
L_101427e4: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, 0u, 1u);
    return;
L_101427f7: ;
    t3 = rd32(eax + 0x48u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t3);
    t5 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        edx = t5;
        goto L_1014281c;
    }
    eax = t4;
    edx = t5;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, eax, 1u);
    return;
L_1014281c: ;
    t6 = rd32(eax + 8u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t6, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101427a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101427a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
