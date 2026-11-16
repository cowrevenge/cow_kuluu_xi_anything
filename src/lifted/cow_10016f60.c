/* f_0x10016f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10016f60(Guest* g)
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 272u);

    eax = arg2;
    ecx = self;
L_10016f73: ;
    t1 = rd8(eax);
    wr8(eax + sp0 - arg2 - 0x104u, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t1;
        goto L_10016f73;
    }
    ecx = (ecx & 0xffffff00u) | t1;
    wr32(sp0 - 0x108u, in_edi);
    edi = sp0 - 0x104u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t2 = rd32(COW_IMG(0x10350738u));
    t3 = rd32(COW_IMG(0x1035073cu));
    t4 = rd32(COW_IMG(0x10350740u));
    wr32(edi - 1u, t2);
    t5 = rd16(COW_IMG(0x10350744u));
    wr32(edi + 3u, t3);
    t6 = rd8(COW_IMG(0x10350746u));
    wr32(edi + 7u, t4);
    wr32(sp0 - 0x10cu, sp0 - 0x104u);
    wr16(edi + 0xbu, (uint16_t)t5);
    wr8(edi + 0xdu, (uint8_t)t6);
    g->eax = (t2 & 0xffff0000u) | t5;
    g->ecx = (t3 & 0xffffff00u) | t6;
    g->edx = sp0 - 0x104u;
    g->esp = sp0 - 0x108u;
    t7 = cow_stdcall(g, rd32(COW_IMG(0x10329134u)), 1, sp0 - 0x104u);   /* kernel32.dll!LoadLibraryA */
    t8 = g->ecx;
    t9 = g->edx;
    wr32(COW_IMG(0x10456a44u), t7);
    if (t7 == 0u)
    {
        eax = t7;
        goto L_10016fe5;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    wr32(sp0 - 0x108u, COW_IMG(0x1035072cu));
    wr32(sp0 - 0x10cu, eax);
    g->eax = eax;
    g->esp = sp0 - 0x104u;
    t10 = cow_stdcall(g, rd32(COW_IMG(0x10329138u)), 2, eax, COW_IMG(0x1035072cu));   /* kernel32.dll!GetProcAddress */
    wr32(COW_IMG(0x10456a48u), t10);
    return (t10 & 0xffffff00u) | 1u;
L_10016fe5: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10016f60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10016f60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
