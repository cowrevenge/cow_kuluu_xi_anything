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
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
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
        esi = arg2;
    }
    else
    {
        ecx = t1;
        ebx = t1;
        g->esi = arg2;
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        cow_stdcall(g, COW_IMG(0x10326e60u), 0);
        t2 = g->ecx;
        t3 = g->esi;
        ecx = t2;
        esi = t3;
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
    g->esi = in_esi;
    g->edx = 0u;
    return eax;
L_10257f52: ;
    if (ebx != 0u) goto L_10257f66;
    g->esp = sp0 - 0x10u;
    t4 = cow_call_regs(g, COW_IMG(0x10255380u), eax, arg1, 0u, 0, 1, 1u);
    t5 = g->edx;
    g->esi = in_esi;
    g->edx = t5;
    return t4;
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
        ebp = arg1;
        goto L_10257f83;
    }
L_10257f72: ;
    g->esp = sp0 - 0x10u;
    t6 = cow_call_regs(g, COW_IMG(0x10255380u), eax, arg1, 0u, 0, 1, 1u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_10257f7b: ;
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x102554b0u), arg1, 1, ebx);
    t8 = g->edx;
    t9 = g->ebp;
    t10 = g->ebx;
    t11 = g->esi;
    edx = t8;
    ebx = t10;
    ebp = t9;
    esi = t11;
L_10257f83: ;
    t12 = rd32(ebp + 4u);
    edi = t12;
    ecx = ebx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t13 = rd32(ebp + 4u);
    wr32(ebp + 8u, ebx);
    wr8(ebx + t13, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
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
