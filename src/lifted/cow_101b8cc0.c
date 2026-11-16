/* f_0x101b8cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101b8cc0(Guest* g)
{
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 - 2u > 0xdu) goto L_101b8d2c;
    t1 = rd32(COW_IMG(0x101b8d38u) + arg1 * 4u - 8u);
    switch (t1 - RD)
    {
    case 0x101b8cd7u: goto L_101b8cd7;
    case 0x101b8cdeu: goto L_101b8cde;
    case 0x101b8ce5u: goto L_101b8ce5;
    case 0x101b8cecu: goto L_101b8cec;
    case 0x101b8cf3u: goto L_101b8cf3;
    case 0x101b8cfau: goto L_101b8cfa;
    case 0x101b8d01u: goto L_101b8d01;
    case 0x101b8d08u: goto L_101b8d08;
    case 0x101b8d0fu: goto L_101b8d0f;
    case 0x101b8d2cu: goto L_101b8d2c;
    default: rt_fatal(g, COW_IMG(0x101b8cd0u), "switch");
    }
    return;
L_101b8cd7: ;
    esi = 0xbu;
L_101b8d14: ;
    g->eax = arg1 - 2u;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0xfu);
    t3 = rd32(esi * 4u + rd32(t2) - 4u);
    wr32(self + 0x30u, t3);
    return;
L_101b8cde: ;
    esi = 0xcu;
    goto L_101b8d14;
L_101b8ce5: ;
    esi = 0xdu;
    goto L_101b8d14;
L_101b8cec: ;
    esi = 0xeu;
    goto L_101b8d14;
L_101b8cf3: ;
    esi = 0xfu;
    goto L_101b8d14;
L_101b8cfa: ;
    esi = 0x11u;
    goto L_101b8d14;
L_101b8d01: ;
    esi = 0x12u;
    goto L_101b8d14;
L_101b8d08: ;
    esi = 0x1eu;
    goto L_101b8d14;
L_101b8d0f: ;
    esi = 0x1fu;
    goto L_101b8d14;
L_101b8d2c: ;
    wr32(self + 0x30u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b8cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101b8cc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
