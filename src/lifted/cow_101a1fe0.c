/* f_0x101a1fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_101a1fe0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 704u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a1ff7u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 0x274u); g->esi = rd32(sp0 - 0x274u); goto E_101a1ff7;
    case 0x101a2041u: self = g->ecx; in_esi = rd32(sp0 - 0x274u); g->esi = rd32(sp0 - 0x274u); goto E_101a2041;
    case 0x101a204au: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 0x274u); g->esi = rd32(sp0 - 0x274u); goto E_101a204a;
    case 0x101a2320u: ecx = g->ecx; in_esi = rd32(sp0 - 0x274u); g->esi = rd32(sp0 - 0x274u); goto E_101a2320;
    default: break;
    }
#endif

    COW_AT(101a1fe0)
    wr32(sp0 - 0x274u, in_esi);
    if (arg1 != 2u) goto L_101a2041;
    COW_AT(101a1ff7)
    t1 = (uint32_t)((int32_t)(rd32(arg4 + 0x1db8u) - (uint32_t)((int32_t)rd32(arg4 + 0x1db8u) >> 0x1fu)) >> 1u) + 1u;
    wr32(sp0 - 0x278u, t1);
    t2 = rd32(arg4 + 0x1dc0u) + 1u;
    wr32(sp0 - 0x27cu, t2);
    wr32(sp0 - 0x280u, 0xc8u);
    wr32(sp0 - 0x284u, 7u);
    g->eax = t1;
    g->ecx = t2;
    g->edx = (uint32_t)((int32_t)rd32(arg4 + 0x1db8u) >> 0x1fu);
    t3 = rd32(arg4 + 0x1db8u);
    g->esp = sp0 - 0x27cu;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0xc8u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x280u, t4);
    wr32(sp0 - 0x284u, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->edx = t6;
    g->esp = sp0 - 0x270u;
    t7 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t4, rd32(sp0 - 0x27cu), rd32(sp0 - 0x278u), in_esi);
    t8 = g->edx;
    wr32(sp0 - 0x278u, sp0 - 0x100u);
    t9 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 0x274u;
    t10 = cow_thiscall(g, COW_IMG(0x10129eb0u), t9, 1, sp0 - 0x100u);
    t11 = g->ecx;
    eax = t10;
    ecx = t11;
L_101a204a: ;
    COW_AT(101a204a)
    wr32(sp0 - 0x278u, COW_IMG(0x10337230u));
    wr32(sp0 - 0x27cu, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    g->esp = sp0 - 0x268u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x10337230u), in_esi, rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu));
    t12 = g->edx;
    wr32(sp0 - 0x280u, sp0 - 0x270u);
    wr32(sp0 - 0x284u, COW_IMG(0x1037a948u));
    wr32(sp0 - 0x288u, arg4 + 4u);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 4u;
    g->esp = sp0 - 0x27cu;
    t13 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 4u, COW_IMG(0x1037a948u), sp0 - 0x270u);
    t14 = g->ecx;
    wr32(sp0 - 0x28cu, COW_IMG(0x10337238u));
    wr32(sp0 - 0x290u, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x10337238u), arg4 + 4u, COW_IMG(0x1037a948u), sp0 - 0x270u);
    t15 = g->edx;
    wr32(sp0 - 0x294u, sp0 - 0x270u);
    wr32(sp0 - 0x298u, COW_IMG(0x1037a954u));
    wr32(sp0 - 0x29cu, arg4 + 0x180u);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0x180u;
    g->esp = sp0 - 0x290u;
    t16 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0x180u, COW_IMG(0x1037a954u), sp0 - 0x270u);
    t17 = g->ecx;
    wr32(sp0 - 0x2a0u, COW_IMG(0x10337240u));
    wr32(sp0 - 0x2a4u, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x10337240u), arg4 + 0x180u, COW_IMG(0x1037a954u), sp0 - 0x270u);
    t18 = g->edx;
    wr32(sp0 - 0x2a8u, sp0 - 0x270u);
    wr32(sp0 - 0x2acu, COW_IMG(0x1037a960u));
    wr32(sp0 - 0x2b0u, arg4 + 0x2fcu);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0x2fcu;
    g->esp = sp0 - 0x2a4u;
    t19 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0x2fcu, COW_IMG(0x1037a960u), sp0 - 0x270u);
    t20 = g->ecx;
    wr32(sp0 - 0x2b4u, COW_IMG(0x10337248u));
    wr32(sp0 - 0x2b8u, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x10337248u), arg4 + 0x2fcu, COW_IMG(0x1037a960u), sp0 - 0x270u);
    t21 = g->edx;
    wr32(sp0 - 0x278u, sp0 - 0x270u);
    wr32(sp0 - 0x27cu, COW_IMG(0x1037a96cu));
    wr32(sp0 - 0x280u, arg4 + 0x478u);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0x478u;
    g->esp = sp0 - 0x274u;
    t22 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0x478u, COW_IMG(0x1037a96cu), sp0 - 0x270u);
    t23 = g->ecx;
    wr32(sp0 - 0x284u, COW_IMG(0x10337250u));
    wr32(sp0 - 0x288u, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x10337250u), arg4 + 0x478u, COW_IMG(0x1037a96cu), sp0 - 0x270u);
    t24 = g->edx;
    wr32(sp0 - 0x28cu, sp0 - 0x270u);
    wr32(sp0 - 0x290u, COW_IMG(0x1037a978u));
    wr32(sp0 - 0x294u, arg4 + 0x770u);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0x770u;
    g->esp = sp0 - 0x288u;
    t25 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0x770u, COW_IMG(0x1037a978u), sp0 - 0x270u);
    t26 = g->ecx;
    wr32(sp0 - 0x298u, COW_IMG(0x10337258u));
    wr32(sp0 - 0x29cu, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x10337258u), arg4 + 0x770u, COW_IMG(0x1037a978u), sp0 - 0x270u);
    t27 = g->edx;
    wr32(sp0 - 0x2a0u, sp0 - 0x270u);
    wr32(sp0 - 0x2a4u, COW_IMG(0x1037a984u));
    wr32(sp0 - 0x2a8u, arg4 + 0x8ecu);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0x8ecu;
    g->esp = sp0 - 0x29cu;
    t28 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0x8ecu, COW_IMG(0x1037a984u), sp0 - 0x270u);
    t29 = g->ecx;
    wr32(sp0 - 0x2acu, COW_IMG(0x10337260u));
    wr32(sp0 - 0x2b0u, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x10337260u), arg4 + 0x8ecu, COW_IMG(0x1037a984u), sp0 - 0x270u);
    t30 = g->edx;
    wr32(sp0 - 0x2b4u, sp0 - 0x270u);
    wr32(sp0 - 0x2b8u, COW_IMG(0x1037a990u));
    wr32(sp0 - 0x2bcu, arg4 + 0xa68u);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0xa68u;
    g->esp = sp0 - 0x2b0u;
    t31 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0xa68u, COW_IMG(0x1037a990u), sp0 - 0x270u);
    t32 = g->ecx;
    wr32(sp0 - 0x278u, COW_IMG(0x10337268u));
    wr32(sp0 - 0x27cu, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    g->esp = sp0 - 0x268u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x10337268u), in_esi, rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu));
    t33 = g->edx;
    wr32(sp0 - 0x280u, sp0 - 0x270u);
    wr32(sp0 - 0x284u, COW_IMG(0x1037a99cu));
    wr32(sp0 - 0x288u, arg4 + 0xbe4u);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0xbe4u;
    g->esp = sp0 - 0x27cu;
    t34 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0xbe4u, COW_IMG(0x1037a99cu), sp0 - 0x270u);
    t35 = g->ecx;
    wr32(sp0 - 0x28cu, COW_IMG(0x10337270u));
    wr32(sp0 - 0x290u, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x10337270u), arg4 + 0xbe4u, COW_IMG(0x1037a99cu), sp0 - 0x270u);
    t36 = g->edx;
    wr32(sp0 - 0x294u, sp0 - 0x270u);
    wr32(sp0 - 0x298u, COW_IMG(0x1037a9a8u));
    wr32(sp0 - 0x29cu, arg4 + 0xd60u);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0xd60u;
    g->esp = sp0 - 0x290u;
    t37 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0xd60u, COW_IMG(0x1037a9a8u), sp0 - 0x270u);
    t38 = g->ecx;
    wr32(sp0 - 0x2a0u, COW_IMG(0x10337278u));
    wr32(sp0 - 0x2a4u, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x10337278u), arg4 + 0xd60u, COW_IMG(0x1037a9a8u), sp0 - 0x270u);
    t39 = g->edx;
    wr32(sp0 - 0x2a8u, sp0 - 0x270u);
    wr32(sp0 - 0x2acu, COW_IMG(0x1037a9b4u));
    wr32(sp0 - 0x2b0u, arg4 + 0xedcu);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0xedcu;
    g->esp = sp0 - 0x2a4u;
    t40 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0xedcu, COW_IMG(0x1037a9b4u), sp0 - 0x270u);
    t41 = g->ecx;
    wr32(sp0 - 0x2b4u, COW_IMG(0x10337280u));
    wr32(sp0 - 0x2b8u, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x10337280u), arg4 + 0xedcu, COW_IMG(0x1037a9b4u), sp0 - 0x270u);
    t42 = g->edx;
    wr32(sp0 - 0x278u, sp0 - 0x270u);
    wr32(sp0 - 0x27cu, COW_IMG(0x1037a9c0u));
    wr32(sp0 - 0x280u, arg4 + 0x1058u);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0x1058u;
    g->esp = sp0 - 0x274u;
    t43 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0x1058u, COW_IMG(0x1037a9c0u), sp0 - 0x270u);
    t44 = g->ecx;
    wr32(sp0 - 0x284u, COW_IMG(0x10337288u));
    wr32(sp0 - 0x288u, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x10337288u), arg4 + 0x1058u, COW_IMG(0x1037a9c0u), sp0 - 0x270u);
    t45 = g->edx;
    wr32(sp0 - 0x28cu, sp0 - 0x270u);
    wr32(sp0 - 0x290u, COW_IMG(0x1037a9ccu));
    wr32(sp0 - 0x294u, arg4 + 0x11d4u);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0x11d4u;
    g->esp = sp0 - 0x288u;
    t46 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0x11d4u, COW_IMG(0x1037a9ccu), sp0 - 0x270u);
    t47 = g->ecx;
    wr32(sp0 - 0x298u, COW_IMG(0x10337290u));
    wr32(sp0 - 0x29cu, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x10337290u), arg4 + 0x11d4u, COW_IMG(0x1037a9ccu), sp0 - 0x270u);
    t48 = g->edx;
    wr32(sp0 - 0x2a0u, sp0 - 0x270u);
    wr32(sp0 - 0x2a4u, COW_IMG(0x1037a9d8u));
    wr32(sp0 - 0x2a8u, arg4 + 0x1350u);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0x1350u;
    g->esp = sp0 - 0x29cu;
    t49 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0x1350u, COW_IMG(0x1037a9d8u), sp0 - 0x270u);
    t50 = g->ecx;
    wr32(sp0 - 0x2acu, COW_IMG(0x10337298u));
    wr32(sp0 - 0x2b0u, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x10337298u), arg4 + 0x1350u, COW_IMG(0x1037a9d8u), sp0 - 0x270u);
    t51 = g->edx;
    wr32(sp0 - 0x2b4u, sp0 - 0x270u);
    wr32(sp0 - 0x2b8u, COW_IMG(0x1037a9e4u));
    wr32(sp0 - 0x2bcu, arg4 + 0x14ccu);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0x14ccu;
    g->esp = sp0 - 0x2b0u;
    t52 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0x14ccu, COW_IMG(0x1037a9e4u), sp0 - 0x270u);
    t53 = g->ecx;
    wr32(sp0 - 0x278u, COW_IMG(0x103372b0u));
    wr32(sp0 - 0x27cu, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    g->esp = sp0 - 0x268u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x103372b0u), in_esi, rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu));
    t54 = g->edx;
    wr32(sp0 - 0x280u, sp0 - 0x270u);
    wr32(sp0 - 0x284u, COW_IMG(0x1037a9f0u));
    wr32(sp0 - 0x288u, arg4 + 0x1648u);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0x1648u;
    g->esp = sp0 - 0x27cu;
    t55 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0x1648u, COW_IMG(0x1037a9f0u), sp0 - 0x270u);
    t56 = g->ecx;
    wr32(sp0 - 0x28cu, COW_IMG(0x103372c4u));
    wr32(sp0 - 0x290u, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x103372c4u), arg4 + 0x1648u, COW_IMG(0x1037a9f0u), sp0 - 0x270u);
    t57 = g->edx;
    wr32(sp0 - 0x294u, sp0 - 0x270u);
    wr32(sp0 - 0x298u, COW_IMG(0x1037a9fcu));
    wr32(sp0 - 0x29cu, arg4 + 0x17c4u);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0x17c4u;
    g->esp = sp0 - 0x290u;
    t58 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0x17c4u, COW_IMG(0x1037a9fcu), sp0 - 0x270u);
    t59 = g->ecx;
    wr32(sp0 - 0x2a0u, COW_IMG(0x103372ccu));
    wr32(sp0 - 0x2a4u, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x103372ccu), arg4 + 0x17c4u, COW_IMG(0x1037a9fcu), sp0 - 0x270u);
    t60 = g->edx;
    wr32(sp0 - 0x2a8u, sp0 - 0x270u);
    wr32(sp0 - 0x2acu, COW_IMG(0x1037aa08u));
    wr32(sp0 - 0x2b0u, arg4 + 0x1940u);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0x1940u;
    g->esp = sp0 - 0x2a4u;
    t61 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0x1940u, COW_IMG(0x1037aa08u), sp0 - 0x270u);
    t62 = g->ecx;
    wr32(sp0 - 0x2b4u, COW_IMG(0x103372d4u));
    wr32(sp0 - 0x2b8u, sp0 - 0x270u);
    g->edx = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x103372d4u), arg4 + 0x1940u, COW_IMG(0x1037aa08u), sp0 - 0x270u);
    t63 = g->edx;
    wr32(sp0 - 0x278u, sp0 - 0x270u);
    wr32(sp0 - 0x27cu, COW_IMG(0x1037aa14u));
    wr32(sp0 - 0x280u, arg4 + 0x1abcu);
    g->eax = sp0 - 0x270u;
    g->ecx = arg4 + 0x1abcu;
    g->esp = sp0 - 0x274u;
    t64 = cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0x1abcu, COW_IMG(0x1037aa14u), sp0 - 0x270u);
    t65 = g->ecx;
    wr32(sp0 - 0x284u, COW_IMG(0x103372dcu));
    wr32(sp0 - 0x288u, sp0 - 0x270u);
    g->ecx = t65;
    g->edx = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x101a2350u), 5, sp0 - 0x270u, COW_IMG(0x103372dcu), arg4 + 0x1abcu, COW_IMG(0x1037aa14u), sp0 - 0x270u);
    t66 = g->ecx;
    t67 = g->edx;
    wr32(sp0 - 0x28cu, sp0 - 0x270u);
    wr32(sp0 - 0x290u, COW_IMG(0x1037aa20u));
    wr32(sp0 - 0x294u, arg4 + 0x1c38u);
    g->esp = sp0 - 0x288u;
    cow_cdecl(g, COW_IMG(0x101a25d0u), 3, arg4 + 0x1c38u, COW_IMG(0x1037aa20u), sp0 - 0x270u);
    g->esi = in_esi;
    return;
L_101a2041: ;
    COW_AT(101a2041)
    if (arg1 != 1u) goto L_101a2320;
    eax = arg1;
    ecx = self;
    goto L_101a204a;
L_101a2320: ;
    COW_AT(101a2320)
    wr32(sp0 - 0x278u, arg4);
    wr32(sp0 - 0x27cu, arg3);
    wr32(sp0 - 0x280u, arg2);
    wr32(sp0 - 0x284u, arg1);
    g->esp = sp0 - 0x6cu;
    cow_bridge_indirect(g, COW_IMG(0x101a1e20u), 0u, 134u, (const uint32_t[]){arg1, arg2, arg3, arg4, in_esi, rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u), rd32(sp0 - 0x254u), rd32(sp0 - 0x250u), rd32(sp0 - 0x24cu), rd32(sp0 - 0x248u), rd32(sp0 - 0x244u), rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u), rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u), rd32(sp0 - 0x1e4u), rd32(sp0 - 0x1e0u), rd32(sp0 - 0x1dcu), rd32(sp0 - 0x1d8u), rd32(sp0 - 0x1d4u), rd32(sp0 - 0x1d0u), rd32(sp0 - 0x1ccu), rd32(sp0 - 0x1c8u), rd32(sp0 - 0x1c4u), rd32(sp0 - 0x1c0u), rd32(sp0 - 0x1bcu), rd32(sp0 - 0x1b8u), rd32(sp0 - 0x1b4u), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu), rd32(sp0 - 0x1a8u), rd32(sp0 - 0x1a4u), rd32(sp0 - 0x1a0u), rd32(sp0 - 0x19cu), rd32(sp0 - 0x198u), rd32(sp0 - 0x194u), rd32(sp0 - 0x190u), rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u)}, g->ecx, arg3, g->eax, 536u);
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a1fe0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a1ff7u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 0x274u);
        g->esp = sp0 - 0x274u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101a2041u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        in_esi = rd32(sp0 - 0x274u);
        g->esp = sp0 - 0x274u;
        g->eax = arg1;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101a204au:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 0x274u);
        g->esp = sp0 - 0x274u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101a2320u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 0x274u);
        g->esp = sp0 - 0x274u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a1fe0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101a1fe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
