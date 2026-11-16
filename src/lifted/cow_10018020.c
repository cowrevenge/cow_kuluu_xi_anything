/* f_0x10018020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10018020(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 1040u);

    wr32(sp0 - 0x404u, 1u);
    wr32(sp0 - 0x408u, 7u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x400u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x404u, arg1);
        wr32(sp0 - 0x408u, 1u);
        wr32(sp0 - 0x40cu, 7u);
        g->eax = arg1;
        g->edx = edx;
        g->esp = sp0 - 0x404u;
        t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 1u);
        t5 = g->edx;
        wr32(sp0 - 0x408u, t4);
        wr32(sp0 - 0x40cu, sp0 - 0x400u);
        g->ecx = sp0 - 0x400u;
        g->esp = sp0 - 0x3f8u;
        t6 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, t4, arg1, rd32(sp0 - 0x400u), rd32(sp0 - 0x3fcu));
        t7 = g->ecx;
        if (arg2 == 0u)
        {
            eax = t6;
            edx = arg2;
        }
        else
        {
            ecx = t7;
            wr32(sp0 - 0x404u, in_ebx);
            wr32(sp0 - 0x408u, in_esi);
            wr32(sp0 - 0x40cu, in_edi);
            edi = sp0 - 0x400u;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            wr16(edi - 1u, rd16(COW_IMG(0x10350e4cu)));
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
            t8 = edi - ~ecx;
            edi = sp0 - 0x400u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0xffu);
            af = 0u;
            zf = 0u;
            sf = 1u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            esi = t8;
            edi = edi - 1u;
            ecx = ~ecx >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = ~ecx & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            edx = ~ecx;
        }
        if (rd32(COW_IMG(0x10668ff8u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10668ff8u));
            wr32(sp0 - 0x404u, sp0 - 0x400u);
            g->eax = sp0 - 0x400u;
            g->edx = edx;
            g->esp = sp0 - 0x400u;
            t9 = cow_thiscall(g, COW_IMG(0x1023c160u), ecx, 1, sp0 - 0x400u);
            t10 = g->edx;
            eax = t9;
            edx = t10;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10018020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10018020(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
