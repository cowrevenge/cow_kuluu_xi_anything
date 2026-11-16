/* f_0x101c2680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101c2680(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 268u);

    wr32(sp0 - 0x104u, sp0 - 0x100u);
    wr32(sp0 - 0x108u, arg1);
    g->eax = sp0 - 0x100u;
    g->edx = arg1;
    g->esp = sp0 - 0x100u;
    t1 = cow_thiscall(g, COW_IMG(0x101c3a90u), self, 2, arg1, sp0 - 0x100u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        ecx = t2;
        edx = t3;
        goto L_101c26a5;
    }
    eax = t1;
    edx = t3;
    g->edx = edx;
    return 0xffffffffu;
L_101c26a5: ;
    wr32(sp0 - 0x104u, in_edi);
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (arg3 >= ~ecx - 1u) goto L_101c26cc;
    g->edx = edx;
    return 0xffffffffu;
L_101c26cc: ;
    eax = sp0 - 0x100u;
    ecx = sp0 - 0x100u;
L_101c26dd: ;
    t4 = rd8(eax);
    wr8(arg2 + eax - sp0 + 0x100u, (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t4;
        goto L_101c26dd;
    }
    g->edx = arg2 - (sp0 - 0x100u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c2680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c2680(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
