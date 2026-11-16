/* f_0x10246410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10246410(Guest* g)
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
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x30u, in_esi, in_ebx);
    t2 = g->edx;
    if (t1 == 0u)
    {
        esi = 0xffffffffu;
    }
    else
    {
        edx = t2;
        ebx = t1;
        edi = ebx;
        eax = 0u;
        ecx = 0xcu;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t3 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, arg1, COW_IMG(0x1034f2d0u), in_edi, in_ebp, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 != 0u)
        {
            ecx = t4;
            edx = t5;
            esi = t3;
            g->ecx = ecx;
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, ebx, 1u, 0x30u, esi, in_edi, in_ebp);
            t6 = g->ecx;
            t7 = g->edx;
            g->edi = edi;
            g->esp = sp0 - 0x18u;
            cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t7, 1, 3, esi, ebx, 1u);
        }
        esi = ebx;
        edi = COW_IMG(0x103888d0u);
        ecx = 0xau;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (!zf)
        {
            esi = 0x400u;
        }
        else
        {
            esi = rd32(ebx + 0x14u);
        }
        g->ecx = rd32(COW_IMG(0x106690b0u));
        g->edx = arg2 & 0x7fu;
        t8 = rd32(COW_IMG(0x106690b0u));
        g->esp = sp0 - 0x10u;
        t9 = cow_stdcall(g, COW_IMG(0x1024c080u), 8, 7u, arg1, arg2 & 0x7fu, arg3, 0u, 0u, 0u, 0u);
        t10 = g->ecx;
        t11 = g->edx;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t10, t11, 1, 1, ebx);
    }
    g->edi = in_edi;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10246410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10246410(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
