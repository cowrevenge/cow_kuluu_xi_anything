/* f_0x102b1fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102b1fd0(Guest* g)
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    eax = in_eax;
    ecx = self;
    edx = in_edx;
    ebp = 0u;
    esi = 0u;
    edi = 0u;
L_102b1fde: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), ecx, 4, esi, arg2 + ebp, COW_IMG(0x103bf904u), 0xd7u);
    t2 = g->ecx;
    t3 = g->edx;
    g->eax = arg1;
    g->ecx = t2;
    g->esp = sp0 - 0x1cu;
    t4 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, t3, 1, 4, edi + t1, arg2, arg1, esi);
    t5 = g->ecx;
    edi = t1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x10u < sp0 - 0x2cu;
    pf = PARITY((uint8_t)(sp0 - 0x10u));
    af = (sp0 - 0x2cu ^ 0x1cu ^ sp0 - 0x10u) >> 4u & 1u;
    zf = sp0 == 0x10u;
    sf = (int32_t)(sp0 - 0x10u) < 0;
    of = ((sp0 - 0x2cu ^ sp0 - 0x10u) & (sp0 - 0x10u ^ 0x1cu)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t6 = ~ecx - 1u;
    if (t4 == 0u)
    {
        esi = t1;
        goto L_102b201f;
    }
    ecx = t6;
    edx = t4;
    ebp = arg2 + ebp;
    esi = t1;
    edi = t6;
    if (rd8(edi + esi - 1u) != 0xau) goto L_102b1fde;
L_102b201f: ;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b1fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b1fd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
