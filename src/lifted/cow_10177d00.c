/* f_0x10177d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10177d00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10074740u), in_eax, self, in_edx, 1, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    ebx = self + 0xa4u;
    ebp = 2u;
L_10177d16: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x1016fc40u), ebx, 0);
    t4 = g->edx;
    if (ebp != 1u)
    {
        eax = t3;
        edx = t4;
        ebx = ebx + 0x78u;
        ebp = ebp - 1u;
        goto L_10177d16;
    }
    eax = t3;
    edx = t4;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x10167800u), self + 0x178u, 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x101718e0u), self + 0x34330u, 0);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x10027990u), self + 0x343e8u, 0);
    t10 = g->edx;
    t11 = cow_fastcall(g, COW_IMG(0x10167440u), self + 0x34428u, t10, 0);
    t12 = g->edx;
    g->edx = t12;
    cow_thiscall(g, COW_IMG(0x10054fc0u), self + 0x3959cu, 0);
    t13 = g->edx;
    wr32(self, COW_IMG(0x10336748u));
    wr16(self + 0x34u, 0u);
    wr32(self + 0x58u, 0u);
    wr32(self + 0x5cu, 0u);
    edi = self + 0x60u;
    eax = 0u;
    ecx = 0x3cu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = self + 0x37508u;
    ecx = 0xeu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(self + 0x54u, 0u);
    wr32(self + 0x150u, 1u);
    wr32(self + 0x154u, 0u);
    wr32(self + 0x39454u, 0u);
    wr32(self + 0x39458u, 0u);
    wr32(self + 0x39498u, 0u);
    wr32(self + 0x3946cu, 0u);
    wr32(self + 0x39470u, 0u);
    wr32(self + 0x39474u, 0u);
    wr32(self + 0x39478u, 0u);
    wr32(self + 0x3947cu, 0u);
    wr32(self + 0x39494u, 0u);
    wr32(self + 0x158u, 0u);
    wr32(self + 0x3944cu, 0u);
    wr32(self + 0x39450u, 0u);
    wr32(self + 0x38e54u, 0u);
    wr32(self + 0x38e50u, 0u);
    wr32(self + 0x38e4cu, 0u);
    wr32(self + 0x38e48u, 0u);
    wr32(self + 0x38e40u, 0u);
    wr32(self + 0x38e3cu, 0u);
    wr32(self + 0x38e38u, 0u);
    wr32(self + 0x38e34u, 0u);
    wr32(self + 0x38e2cu, 0u);
    wr32(self + 0x38e28u, 0u);
    wr32(self + 0x38e24u, 0u);
    wr32(self + 0x38e20u, 0u);
    wr32(self + 0x38e58u, 0x3f800000u);
    wr32(self + 0x38e44u, 0x3f800000u);
    wr32(self + 0x38e30u, 0x3f800000u);
    wr32(self + 0x38e1cu, 0x3f800000u);
    g->edx = t13;
    cow_stdcall(g, COW_IMG(0x101784e0u), 0);
    t14 = g->edx;
    wr32(self + 0x38u, 0u);
    wr32(self + 0x17cu, 0xffffffffu);
    wr32(self + 0x3cu, 0u);
    wr32(COW_IMG(0x1065c5d8u), 0u);
    wr32(self + 0x40u, 0u);
    wr32(self + 0x44u, 0u);
    wr32(self + 0x48u, 0u);
    wr32(self + 0x50u, 0u);
    wr32(self + 0x174u, 0u);
    wr32(self + 0x3942cu, 0u);
    wr32(self + 0x39430u, 0u);
    wr32(self + 0x39438u, 0u);
    wr32(self + 0x3943cu, 0u);
    wr32(self + 0x39440u, 0u);
    wr32(self + 0x39444u, 0u);
    wr32(self + 0x38d90u, 0u);
    wr32(self + 0x39130u, 0u);
    wr32(self + 0x39448u, 0u);
    wr32(self + 0x39420u, 0u);
    wr32(self + 0x343e4u, 0u);
    wr8(COW_IMG(0x10376ee8u), 1u);
    wr32(self + 0x15cu, 0u);
    wr32(self + 0x3949cu, 0u);
    wr32(self + 0x16cu, 0x40000000u);
    wr32(self + 0x170u, 0x40000000u);
    wr32(self + 0x38d94u, 0u);
    wr8(self + 0x38d98u, 0u);
    wr32(COW_IMG(0x10632038u), 0u);
    wr32(COW_IMG(0x10631f18u), 8u);
    wr32(COW_IMG(0x1065c4d0u), 0xfu);
    wr32(COW_IMG(0x10631c88u), 0xfu);
    wr32(COW_IMG(0x10621c00u), 0u);
    wr32(self + 0x3954cu, 0x3f800000u);
    edi = COW_IMG(0x10621c88u);
    eax = 0u;
    ecx = 0x4000u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = COW_IMG(0x10631f38u);
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(COW_IMG(0x10621c80u), 0u);
    wr32(COW_IMG(0x10621c7cu), 0u);
    wr32(COW_IMG(0x1065c4d4u), 0u);
    wr32(COW_IMG(0x1065c4ccu), 0u);
    wr32(COW_IMG(0x10621c70u), eax);
    wr32(COW_IMG(0x10621c74u), eax);
    wr32(COW_IMG(0x10621c78u), eax);
    wr32(self + 0x394a4u, 1u);
    cow_thiscall(g, COW_IMG(0x10177fa0u), self, 0);
    wr8(self + 0x39598u, 1u);
    wr32(self + 0x39590u, 0x399d4952u);
    wr32(self + 0x39594u, 0x399d4952u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10177d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10177d00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
