/* f_0x1012ee50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1012ee50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((uint32_t)(int16_t)rd16(self + 0x1b4u) == 9u)
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        esi = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
        goto L_1012eef9;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x1b4u);
    ecx = rd32(COW_IMG(0x104dfd98u));
    esi = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
    if (eax != 0x10u) goto L_1012ef56;
    if (rd32(ecx + esi * 0x48u + 0x2c7d8u) != 0u)
    {
        edx = esi * 9u;
        goto L_1012ee9e;
    }
    edx = esi * 9u;
    if (rd8(esi * 0x34u + self + 0x14u) != 0u)
    {
        ecx = esi * 0xdu;
        goto L_1012ee9e;
    }
    eax = (esi * 3u & 0xffffff00u) | rd8(esi * 0x34u + self + 0x14u);
    ecx = esi * 0xdu;
L_1012ee97: ;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10037c50u), eax, ecx, edx);
    return;
L_1012ee9e: ;
    if (rd32(COW_IMG(0x10578470u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10578470u));
        goto L_1012ee97;
    }
    eax = rd32(COW_IMG(0x10578470u));
    if (rd32(eax + 8u) == 0u)
    {
        ecx = rd32(eax + 8u);
        goto L_1012ee97;
    }
    ecx = rd32(eax + 8u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t2 = rd32(COW_IMG(0x10578470u));
    wr16(t2 + 0x15cu, 0u);
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x1014f250u), rd32(COW_IMG(0x10578470u)), 1, 2u);
    t3 = g->edx;
    t4 = rd32(COW_IMG(0x10578470u));
    t5 = cow_call_regs(g, COW_IMG(0x10118db0u), t4, rd32(t4 + 8u), g->edx, 0, 2, 2u, 0u);
    t6 = rd32(rd32(COW_IMG(0x10578470u)) + 8u);
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t6, 2, t6, 0u);
    return;
L_1012eef9: ;
    if (rd32(ecx + esi * 0x48u + 0x2c7d8u) != 0u)
    {
        eax = esi * 9u;
        edx = rd32(ecx + esi * 0x48u + 0x2c7d8u);
        goto L_1012ef32;
    }
    eax = esi * 9u;
    if (rd8(esi * 0x34u + self + 0x14u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi * 0x34u + self + 0x14u);
        ecx = esi * 3u;
        edx = esi * 0xdu;
        goto L_1012ef32;
    }
    eax = (eax & 0xffffff00u) | rd8(esi * 0x34u + self + 0x14u);
    ecx = esi * 3u;
    edx = esi * 0xdu;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t7 = g->edx;
    t8 = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t7, 2, t8, 0u);
    return;
L_1012ef32: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    wr8(rd32(self + 8u) + 0x5du, 1u);
    wr32(self + 0x1bcu, esi);
    wr16(self + 0x1b8u, 9u);
    wr16(self + 0x1b4u, 0x13u);
L_1012ef56: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012ee50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012ee50(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
