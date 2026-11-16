/* f_0x10226320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10226320(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = rd32(COW_IMG(0x10456a28u));
        goto L_10226343;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = rd32(COW_IMG(0x10456a28u));
    if (eax == 2u) goto L_1022633c;
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_10226346;
    }
L_1022633c: ;
    eax = 1u;
L_10226348: ;
    t1 = rd32(COW_IMG(0x10226374u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1022634fu: goto L_1022634f;
    case 0x1022635eu: goto L_1022635e;
    default: rt_fatal(g, COW_IMG(0x10226348u), "switch");
    }
    return 0;
L_10226343: ;
    cf = eax < 3u;
    zf = eax == 3u;
L_10226346: ;
    if (!cf && !zf) goto L_1022636d;
    goto L_10226348;
L_1022634f: ;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg1, 0u);
    return t3;
L_1022635e: ;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg1, 0u);
    return t2;
L_1022636d: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10226320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10226320(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
