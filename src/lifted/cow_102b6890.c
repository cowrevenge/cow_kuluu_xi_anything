/* f_0x102b6890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102b6890(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(COW_IMG(0x103c2148u)) != 0u)
    {
        eax = 0u;
L_102b689b: ;
        wr32(COW_IMG(0x109aecb0u) + eax * 4u, eax);
        if ((int32_t)(eax + 1u) < 21)
        {
            eax = eax + 1u;
            goto L_102b689b;
        }
        wr8(COW_IMG(0x103c2148u), 0u);
    }
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102b6920u), 5, 0u, arg1, arg2, arg3, arg4);
    if ((int32_t)arg4 >= 1)
    {
        ebx = COW_IMG(0x109aecb0u);
        ebp = arg4 * 2u + 1u;
        esi = 1u;
L_102b68e3: ;
        g->eax = arg3;
        g->ecx = arg2;
        g->edx = arg1;
        g->esp = sp0 - 0x10u;
        t1 = cow_cdecl(g, COW_IMG(0x102b6920u), 5, esi, arg1, arg2, arg3, arg4);
        t2 = g->ecx;
        t3 = g->edx;
        g->esp = sp0 - 0x24u;
        cow_cdecl(g, COW_IMG(0x1028a820u), 3, 5u, ebp, ebx);
        if ((int32_t)(esi + 1u) <= (int32_t)arg4)
        {
            ebx = ebx + 4u;
            ebp = ebp - 2u;
            esi = esi + 1u;
            goto L_102b68e3;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b6890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b6890(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
