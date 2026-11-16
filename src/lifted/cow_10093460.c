/* f_0x10093460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10093460(Guest* g)
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
    uint32_t loc_84;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 160u);

    wr32(sp0 - 0x88u, in_ebx);
    wr32(sp0 - 0x8cu, in_ebp);
    wr32(sp0 - 0x90u, in_esi);
    wr32(sp0 - 0x94u, in_edi);
    edi = sp0 - 0x80u;
    eax = 0u;
    ecx = 0x20u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = arg1;
    ecx = arg5 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x84u, 0u);
    ecx = arg5 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    if ((uint8_t)arg2 == 0u)
    {
        edx = arg5;
        ebp = 0u;
    }
    else
    {
        wr32(sp0 - 0x98u, arg2);
        wr32(sp0 - 0x9cu, 0u);
        g->ecx = ecx;
        g->edx = arg5;
        g->esp = sp0 - 0x94u;
        t1 = cow_cdecl(g, COW_IMG(0x10142070u), 2, 0u, arg2);
        t2 = g->ecx;
        t3 = g->edx;
        ecx = t2;
        edx = t3;
        ebp = t1;
    }
    if ((uint8_t)arg3 == 0u)
    {
        esi = 0u;
        loc_84 = 0u;
    }
    else
    {
        wr32(sp0 - 0x98u, arg3);
        wr32(sp0 - 0x9cu, 1u);
        g->ecx = ecx;
        g->esp = sp0 - 0x94u;
        t4 = cow_cdecl(g, COW_IMG(0x10142070u), 2, 1u, arg3);
        t5 = g->ecx;
        wr32(sp0 - 0x84u, t4);
        ecx = t5;
        esi = t4;
        loc_84 = t4;
    }
    if (ebp == 0u)
    {
        ebx = 0u;
    }
    else
    {
        edi = ebp;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t6 = ~ecx - 1u;
        esi = ebp;
        edi = sp0 - 0x80u;
        ecx = t6 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t6 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        edi = ebp;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t7 = ~ecx - 1u;
        ecx = t7;
        ebx = t7;
        esi = loc_84;
    }
    if (esi != 0u)
    {
        if (ebp != 0u)
        {
            wr8(ebx + sp0 - 0x80u, 0x20u);
            ebx = ebx + 1u;
        }
        edi = esi;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t8 = ~ecx - 1u;
        edi = ebx + sp0 - 0x80u;
        ecx = t8 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t8 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        edi = loc_84;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        ebx = ebx + ~ecx - 1u;
        ecx = ~ecx - 1u;
        esi = loc_84;
    }
    if (arg4 != 0u)
    {
        if (ebp != 0u) goto L_10093557;
        if (esi == 0u) goto L_1009355d;
L_10093557: ;
        wr8(ebx + sp0 - 0x80u, 0x20u);
        ebx = ebx + 1u;
L_1009355d: ;
        edi = arg4;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t9 = ~ecx - 1u;
        esi = arg4;
        edi = ebx + sp0 - 0x80u;
        ecx = t9 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t9 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    }
    esi = sp0 - 0x80u;
    edi = arg1;
    ecx = (arg5 - 1u) >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg5 - 1u & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(arg5 + arg1 - 1u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10093460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10093460(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
