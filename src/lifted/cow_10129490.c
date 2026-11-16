/* f_0x10129490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10129490(Guest* g)
{
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg1 > 0xau) goto L_1012959d;
    t1 = rd32(COW_IMG(0x101295a0u) + (uint8_t)arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x101294a9u: goto L_101294a9;
    case 0x101294c6u: goto L_101294c6;
    case 0x101294e3u: goto L_101294e3;
    case 0x10129500u: goto L_10129500;
    case 0x1012951du: goto L_1012951d;
    case 0x10129536u: goto L_10129536;
    case 0x1012954fu: goto L_1012954f;
    case 0x10129568u: goto L_10129568;
    case 0x10129581u: goto L_10129581;
    case 0x1012959du: goto L_1012959d;
    default: rt_fatal(g, COW_IMG(0x101294a2u), "switch");
    }
    return;
L_101294a9: ;
    if (rd8(self + 0x64023u) == arg2) goto L_1012959d;
    wr8(self + 0x64023u, (uint8_t)arg2);
    return;
L_101294c6: ;
    if (rd8(self + 0x64024u) == arg2) goto L_1012959d;
    wr8(self + 0x64024u, (uint8_t)arg2);
    return;
L_101294e3: ;
    if (rd8(self + 0x64025u) == arg2) goto L_1012959d;
    wr8(self + 0x64025u, (uint8_t)arg2);
    return;
L_10129500: ;
    if (rd8(self + 0x64028u) == arg2) goto L_1012959d;
    wr8(self + 0x64028u, (uint8_t)arg2);
    return;
L_1012951d: ;
    if (rd8(self + 0x64029u) == arg2) goto L_1012959d;
    wr8(self + 0x64029u, (uint8_t)arg2);
    return;
L_10129536: ;
    if (rd8(self + 0x64027u) == arg2) goto L_1012959d;
    wr8(self + 0x64027u, (uint8_t)arg2);
    return;
L_1012954f: ;
    if (rd8(self + 0x64020u) == arg2) goto L_1012959d;
    wr8(self + 0x64020u, (uint8_t)arg2);
    return;
L_10129568: ;
    if (rd8(self + 0x64022u) == arg2) goto L_1012959d;
    wr8(self + 0x64022u, (uint8_t)arg2);
    return;
L_10129581: ;
    wr8(self + 0x64021u, (uint8_t)arg2);
    if ((uint8_t)arg2 != arg2)
    {
        wr8(self + 0x64021u, (uint8_t)arg2);
    }
L_1012959d: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10129490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10129490(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
