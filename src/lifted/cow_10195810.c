/* f_0x10195810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10195810(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    esi = arg1;
    edi = COW_IMG(0x1037997cu);
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = 0u;
        goto L_10195863;
    }
    g->eax = 0u;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x10310b70u), 0);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_10195859;
    }
    eax = t1;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1019584d;
    }
    eax = eax - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10195841;
    }
    return 0u;
L_10195841: ;
    wr32(COW_IMG(0x106626c4u), 2u);
L_10195863: ;
    esi = arg1;
    edi = COW_IMG(0x10379970u);
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_101958a9;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t2 = cow_stdcall(g, COW_IMG(0x10310b7bu), 0);
    if (t2 == 0u) goto L_1019589f;
    eax = t2;
    if (eax == 1u) goto L_1019588a;
    return 0u;
L_1019584d: ;
    wr32(COW_IMG(0x106626c4u), 1u);
    goto L_10195863;
L_10195859: ;
    wr32(COW_IMG(0x106626c4u), 0u);
    goto L_10195863;
L_1019588a: ;
    wr32(COW_IMG(0x106626c4u), 1u);
    return COW_IMG(0x106626acu);
L_1019589f: ;
    wr32(COW_IMG(0x106626c4u), 0u);
L_101958a9: ;
    return COW_IMG(0x106626acu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10195810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10195810(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
