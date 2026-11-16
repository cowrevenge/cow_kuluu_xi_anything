/* f_0x1022bf10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1022bf10(Guest* g)
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
        goto L_1022bf33;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = rd32(COW_IMG(0x10456a28u));
    if (eax == 2u) goto L_1022bf2c;
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_1022bf36;
    }
L_1022bf2c: ;
    eax = 1u;
L_1022bf38: ;
    t1 = rd32(COW_IMG(0x1022bf64u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1022bf3fu: goto L_1022bf3f;
    case 0x1022bf4eu: goto L_1022bf4e;
    default: rt_fatal(g, COW_IMG(0x1022bf38u), "switch");
    }
    return 0;
L_1022bf33: ;
    cf = eax < 3u;
    zf = eax == 3u;
L_1022bf36: ;
    if (!cf && !zf) goto L_1022bf5d;
    goto L_1022bf38;
L_1022bf3f: ;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg1, 0u);
    return t3;
L_1022bf4e: ;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg1, 1u);
    return t2;
L_1022bf5d: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022bf10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022bf10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
