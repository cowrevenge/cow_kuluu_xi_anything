/* f_0x10257f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10257f00(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    edi = arg2;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t1 = ~ecx - 1u;
    if (t1 <= 0xfffffffdu)
    {
        ecx = t1;
        ebx = t1;
    }
    else
    {
        ecx = t1;
        ebx = t1;
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        cow_stdcall(g, COW_IMG(0x10326e60u), 0);
        t2 = g->ecx;
        ecx = t2;
    }
    if (rd32(arg1 + 4u) == 0u)
    {
        eax = rd32(arg1 + 4u);
        goto L_10257f52;
    }
    eax = rd32(arg1 + 4u);
    if (rd8(eax - 1u) == 0u) goto L_10257f52;
    ecx = (ecx & 0xffffff00u) | rd8(eax - 1u);
    if ((uint8_t)ecx == 0xffu) goto L_10257f52;
    if (ebx != 0u)
    {
        edx = 0u;
        goto L_10257f7b;
    }
    wr8(eax - 1u, (uint8_t)((uint8_t)ecx - 1u));
    wr32(arg1 + 4u, 0u);
    wr32(arg1 + 8u, 0u);
    wr32(arg1 + 0xcu, 0u);
    g->edx = 0u;
    return eax;
L_10257f52: ;
    if (ebx != 0u) goto L_10257f66;
    g->edx = 0u;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x10255380u), eax, arg1, g->edx, 0, 1, 1u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_10257f66: ;
    if (rd32(arg1 + 0xcu) > 0x1fu)
    {
        eax = rd32(arg1 + 0xcu);
        goto L_10257f72;
    }
    eax = rd32(arg1 + 0xcu);
    if (eax >= ebx)
    {
        edx = 0u;
        goto L_10257f83;
    }
L_10257f72: ;
    g->edx = 0u;
    g->esp = sp0 - 0x10u;
    t5 = cow_call_regs(g, COW_IMG(0x10255380u), eax, arg1, g->edx, 0, 1, 1u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_10257f7b: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x102554b0u), arg1, 1, ebx);
    t7 = g->edx;
    edx = t7;
L_10257f83: ;
    t8 = rd32(arg1 + 4u);
    esi = arg2;
    edi = t8;
    ecx = ebx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t9 = rd32(arg1 + 4u);
    wr32(arg1 + 8u, ebx);
    wr8(ebx + t9, 0u);
    g->edx = edx;
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10257f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10257f00(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
