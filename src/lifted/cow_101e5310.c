/* f_0x101e5310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e5310(Guest* g)
{
    double d11;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, sp0 - 8u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, t1, g->edx, 0, 1, sp0 - 8u);
    wr32(sp0 - 0x24u, 0u);
    t2 = (uint32_t)(int8_t)rd8(self + 0x31u) * 0xd00u + 0x3800u | (uint32_t)(int8_t)rd8(self + 0x32u) * 0xdu + 0x38u | ((uint32_t)(int8_t)rd8(self + 0x30u) * 0xdu << 0x10u) + 0x380000u | 0x80000000u;
    wr32(sp0 - 0x28u, t2);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0x3f800000u);
    t3 = rd32(sp0 - 6u) + 0xcu;
    wr32(sp0 - 0x34u, t3);
    t4 = rd32(sp0 - 8u) + 0xau;
    wr32(sp0 - 0x38u, t4);
    wr32(sp0 - 0x3cu, 0x201u);
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x1015bd70u), rd32(COW_IMG(0x10621808u)), 7, 0x201u, t4, t3, 0x3f800000u, 0u, t2, 0u);
    t5 = g->edx;
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->ebx = 0u;
    g->edi = self + 0x30u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, 1u, 1u, 1u);
    if (rd32(self + 0x2cu) == 0u)
    {
        eax = rd32(sp0 - 8u) + 1u;
        edx = rd32(sp0 - 6u) + 8u;
        wr32(sp0 - 0x24u, 0x80808080u);
        wr32(sp0 - 0x28u, self + 0x34u);
        wr32(sp0 - 0x2cu, edx);
        wr32(sp0 - 0x30u, eax);
        wr32(sp0 - 0x34u, 0xa2u);
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x101c9d50u), 5, 0xa2u, eax, edx, self + 0x34u, 0x80808080u);
    }
    else
    {
        eax = rd32(sp0 - 8u) + 1u;
        ecx = rd32(self + 0x2cu);
        edx = rd32(sp0 - 6u) + 8u;
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, 0xa2u);
        wr32(sp0 - 0x2cu, (uint32_t)(int16_t)edx);
        wr32(sp0 - 0x30u, (uint32_t)(int16_t)eax);
        g->edx = (uint32_t)(int16_t)edx;
        g->esp = sp0 - 0x20u;
        t6 = cow_call_regs(g, COW_IMG(0x101c6060u), (uint32_t)(int16_t)eax, ecx, g->edx, 1, 4, (uint32_t)(int16_t)eax, (uint32_t)(int16_t)edx, 0xa2u, 1u);
        t7 = g->edx;
        wr32(sp0 - 0x34u, t6);
        g->edx = t7;
        g->esp = sp0 - 0x30u;
        t8 = cow_call_regs(g, COW_IMG(0x101c6020u), t6, rd32(self + 0x2cu), g->edx, 1, 1, t6);
        t9 = g->edx;
        wr32(sp0 - 0x38u, t8);
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, COW_IMG(0x101c60e0u), rd32(self + 0x2cu), 6, t8, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), 0xa2u, 1u);
    }
    wr32(sp0 - 0xcu, 0xffffffd0u - self);
    ebx = self + 0x20u;
    edi = self + 0x30u;
L_101e541d: ;
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 1u);
    t10 = edi - self - 0x2eu;
    wr32(sp0 - 0x2cu, t10);
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->ebx = ebx;
    g->edi = edi;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, t10, 1u, 1u);
    wr32(sp0 - 0x10u, (uint32_t)(int8_t)rd8(edi));
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 8u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, rd32(ebx));
    wr32(sp0 - 0x34u, 0x3f800000u);
    wr32(sp0 - 0x38u, rd32(ebx));
    d11 = (double)(float)fr(g, (double)(int32_t)(uint32_t)(int8_t)rd8(edi) * (double)rdf32(COW_IMG(0x1033976cu)));
    wrf32(sp0 - 0x38u, (float)d11);
    t12 = (uint32_t)(int16_t)(rd32(sp0 - 6u) + 1u);
    wr32(sp0 - 0x3cu, t12);
    t13 = (uint32_t)(int16_t)(rd32(sp0 - 8u) + 0xcu);
    wr32(sp0 - 0x40u, t13);
    g->eax = t13;
    g->edx = rd32(sp0 - 8u) + 0xcu;
    t14 = rd32(sp0 - 8u);
    t15 = cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + 0x18u), 8, t13, t12, cow_f2bits(d11), 0x3f800000u, rd32(ebx), 0u, 8u, 0u);
    t16 = g->edx;
    if ((int32_t)(edi - self - 0x2fu) < 3)
    {
        ebx = ebx + 4u;
        edi = edi + 1u;
        goto L_101e541d;
    }
    eax = t15;
    edx = t16;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e5310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e5310(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
