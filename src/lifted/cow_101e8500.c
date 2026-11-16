/* f_0x101e8500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e8500(Guest* g)
{
    uint32_t eax;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_101e8544;
    if (arg1 == 1u) goto L_101e850f;
    return 0u;
L_101e850f: ;
    if (rd8(COW_IMG(0x10663588u)) != 0u) goto L_101e851e;
    eax = (arg1 - 1u & 0xffffff00u) | rd8(COW_IMG(0x10663588u));
    loc_8 = 6u;
L_101e852b: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, loc_8);
    t2 = g->edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t1, 2u);
    return 0u;
L_101e851e: ;
    if (rd32(COW_IMG(0x1066362cu)) != 0u) goto L_101e855c;
    eax = rd32(COW_IMG(0x1066362cu));
L_101e8527: ;
    loc_8 = 5u;
    goto L_101e852b;
L_101e8544: ;
    if (rd8(COW_IMG(0x10663588u)) != 0u)
    {
        eax = (arg1 & 0xffffff00u) | rd8(COW_IMG(0x10663588u));
        goto L_101e8553;
    }
    eax = (arg1 & 0xffffff00u) | rd8(COW_IMG(0x10663588u));
    loc_8 = 6u;
    goto L_101e852b;
L_101e8553: ;
    if (rd8(COW_IMG(0x10663628u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10663628u));
        goto L_101e8527;
    }
L_101e855c: ;
    return COW_IMG(0x10663594u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e8500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e8500(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
