/* f_0x1023daa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1023daa0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = in_eax;
    edx = in_edx;
    ebp = 0u;
L_1023daaa: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_stdcall(g, COW_IMG(0x100db6e0u), 1, ebp);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1023db1d;
    }
    eax = t1;
    edx = t2;
    if (eax == 1u) goto L_1023dac4;
    if (eax != 2u) goto L_1023db1d;
L_1023dac4: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_stdcall(g, COW_IMG(0x100db6d0u), 1, ebp);
    t4 = g->edx;
    esi = t3;
    edi = COW_IMG(0x1034f2b8u);
    ecx = 2u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        eax = 0u;
        edx = t4;
        goto L_1023db1d;
    }
    edx = t4;
    g->eax = 0u;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = edx;
    t5 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x10u;
    t6 = cow_stdcall(g, COW_IMG(0x100db7a0u), 1, ebp);
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    esi = arg1;
L_1023daf0: ;
    if (rd8(eax) != rd8(esi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1023db14;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_1023db10;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1023db14;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1023daf0;
    }
L_1023db10: ;
    eax = 0u;
L_1023db19: ;
    if (eax == 0u) goto L_1023db2b;
L_1023db1d: ;
    if ((int32_t)(ebp + 1u) < 16)
    {
        ebp = ebp + 1u;
        goto L_1023daaa;
    }
    g->edx = edx;
    return 0xffffffffu;
L_1023db14: ;
    eax = -cf + 1u - cf;
    goto L_1023db19;
L_1023db2b: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023daa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023daa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
