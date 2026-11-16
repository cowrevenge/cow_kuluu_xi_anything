/* f_0x1011d460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1011d460(Guest* g)
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
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    t1 = rd32(sp0 + 8u);
    wr16(t1, 0u);
    wr16(t1 + 2u, 0u);
    if (arg1 == 0u) goto L_1011d51b;
    ebp = t1;
    t2 = rd8(arg1);
    wr32(sp0 + 8u, 0u);
    if ((uint8_t)t2 == 0u)
    {
        ecx = 0u;
        ebx = in_ebx;
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 0x18u, in_ebx);
        wr32(sp0 - 0x1cu, in_edi);
        ecx = 0u;
        edx = in_edx;
        esi = arg1;
L_1011d48b: ;
        wr32(sp0 - 0x20u, 0xau);
        wr32(sp0 - 0x24u, esi);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t3 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), ecx, 3, esi, 0xau, in_edi);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 != 0u)
        {
            edx = t5;
            ebx = t3;
            edi = ebx - esi;
        }
        else
        {
            eax = t3;
            ecx = t4;
            edx = t5;
            ebx = t3;
            edi = esi;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0xffu);
            af = 0u;
            zf = 0u;
            sf = 1u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            t6 = ~ecx - 1u;
            edi = t6;
        }
        wr32(sp0 - 0x20u, edi);
        wr32(sp0 - 0x24u, esi);
        g->esp = sp0 - 0x1cu;
        cow_fastcall(g, COW_IMG(0x1018d330u), sp0 - 0xcu, edx, 2, esi, edi);
        t7 = g->edx;
        g->edx = t7;
        t8 = cow_thiscall(g, COW_IMG(0x1018d470u), sp0 - 0xcu, 0);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(sp0 - 0x20u, t8);
        g->edx = t10;
        t11 = cow_cdecl(g, COW_IMG(0x1011d010u), 1, t8);
        t12 = g->edx;
        if ((int16_t)t11 <= (int16_t)rd16(ebp))
        {
            eax = t11;
            edx = t12;
        }
        else
        {
            eax = t11;
            edx = t12;
            wr16(ebp, (uint16_t)eax);
        }
        if (ebx != 0u)
        {
            esi = ebx + 1u;
        }
        else
        {
            esi = edi + esi;
        }
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t13 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xcu, edx, 0);
        t14 = g->edx;
        t15 = rd32(sp0 + 8u) + 1u;
        t16 = rd8(esi);
        wr32(sp0 + 8u, t15);
        if ((uint8_t)t16 != 0u)
        {
            ecx = t15;
            edx = t14;
            goto L_1011d48b;
        }
        ecx = t15;
        ebx = rd32(sp0 - 0x18u);
        edi = rd32(sp0 - 0x1cu);
    }
    wr16(ebp + 2u, (uint16_t)(ecx << 4u));
    if ((int32_t)ecx <= 0)
    {
        eax = ecx << 4u;
    }
    else
    {
        eax = ecx << 4u;
        wr16(ebp + 2u, (uint16_t)(eax + (ecx - 1u) * arg3));
    }
    g->ebx = ebx;
    g->edi = edi;
    return (eax & 0xffffff00u) | 1u;
L_1011d51b: ;
    return in_eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011d460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011d460(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
