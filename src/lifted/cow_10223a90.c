/* f_0x10223a90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10223a90(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = rd32(COW_IMG(0x10456a28u));
        goto L_10223ab3;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = rd32(COW_IMG(0x10456a28u));
    if (eax == 2u) goto L_10223aac;
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_10223ab6;
    }
L_10223aac: ;
    eax = 1u;
L_10223ab8: ;
    t1 = rd32(COW_IMG(0x10223b00u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10223abfu: goto L_10223abf;
    case 0x10223aceu: goto L_10223ace;
    case 0x10223addu: goto L_10223add;
    case 0x10223aecu: goto L_10223aec;
    default: rt_fatal(g, COW_IMG(0x10223ab8u), "switch");
    }
    return 0;
L_10223ab3: ;
    cf = eax < 3u;
    zf = eax == 3u;
L_10223ab6: ;
    if (!cf && !zf) goto L_10223afb;
    goto L_10223ab8;
L_10223abf: ;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg1, 0u);
    return t5;
L_10223ace: ;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg1, 0u);
    return t4;
L_10223add: ;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg1, 1u);
    return t3;
L_10223aec: ;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg1, 1u);
    return t2;
L_10223afb: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10223a90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10223a90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
