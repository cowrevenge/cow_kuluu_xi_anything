/* f_0x10063090 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts ecx by subtracting 0x34 and jumps to FUN_10062700, which performs cleanup/destruction logic based on flags in the stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10063090(Guest* g, uint32_t self, uint32_t flag)
{
    uint32_t esi = self - 0x34u;
    uint8_t bl = (uint8_t)(flag & 0xFF);

    if (bl & 2)
    {
        uint32_t eax = rd32(esi - 4u);
        uint32_t ebp = esi - 4u;
        
        // lea ecx, [eax + eax*2] -> ecx = eax * 3
        // lea ecx, [ecx + ecx*4] -> ecx = ecx * 5 = eax * 15
        // lea esi, [esi + ecx*8] -> esi = (self - 0x34) + (eax * 15 * 8) = (self - 0x34) + (eax * 120)
        uint32_t ecx_val = eax * 15u;
        uint32_t loop_esi = esi + (ecx_val * 8u);
        
        // dec eax
        eax--;

        if ((int32_t)eax >= 0)
        {
            uint32_t edi = eax + 1u;
            loop_esi -= 0x78u; // sub esi, 0x78
            
            while (edi != 0)
            {
                cow_fastcall(g, COW_IMG(0x10062600u), loop_esi, 0, 0);
                edi--;
                if (edi == 0) break;
                loop_esi -= 0x78u;
            }
        }

        if (bl & 1)
        {
            cow_stdcall(g, COW_IMG(0x1002c8e0u), 1, ebp);
        }
        
        g->edx = g->edx; // edx is not modified in this path explicitly by the instructions shown, 
                         // but callee calls might modify it. The prompt says "Leave in eax and edx exactly what the original leaves".
                         // Since we don't know what the callees do to edx, we must assume they preserve or modify it as per their contract.
                         // However, cow_fastcall/cow_stdcall helpers usually handle register preservation according to convention.
                         // Fastcall: ecx, edx are args. Callee preserves ebx, esi, edi, ebp. EAX, ECX, EDX are scratch.
                         // Stdcall: Callee preserves ebx, esi, edi, ebp. EAX, ECX, EDX are scratch.
                         // So after calls, eax and edx are undefined/scratch. 
                         // BUT the prompt says "ALL of eax and edx are compared... Leave in eax and edx exactly what the original leaves".
                         // In the original assembly:
                         // Path 1 (bl&2):
                         //   ... calls ...
                         //   mov eax, ebp
                         //   pop ebp, pop esi, pop ebx
                         //   ret 4
                         //   So EAX = EBP. EDX is whatever the last call left it as.
                         // Path 2 (!bl&2):
                         //   ... calls ...
                         //   mov eax, esi
                         //   pop esi, pop ebx
                         //   ret 4
                         //   So EAX = ESI. EDX is whatever the last call left it as.

        return ebp;
    }
    else
    {
        cow_fastcall(g, COW_IMG(0x10062600u), esi, 0, 0);
        
        if (bl & 1)
        {
            cow_stdcall(g, COW_IMG(0x10028710u), 1, esi);
        }
        
        return esi;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10063090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    // The original function 10063090 does: sub ecx, 0x34; jmp 10062700.
    // 10062700 expects ECX to be the 'self' pointer (adjusted).
    // It reads a stack argument at [esp+8] relative to its own entry.
    // Entry of 10063090: ESP points to return address. [ESP] = RetAddr, [ESP+4] = Arg1.
    // Jump to 10062700: Same stack layout.
    // Inside 10062700: push ebx (esp-4), mov bl, [esp+8]. 
    // At entry of 10062700, esp is sp0. After push ebx, esp is sp0-4.
    // [esp+8] = [sp0-4+8] = [sp0+4]. This is the first stack argument.
    
    const uint32_t self = g->ecx;
    const uint32_t flag = rd32(sp0 + 4u);
    
    // cow_fn_10063090 takes 'self' as the adjusted pointer? 
    // Wait, the contract says stack_args=0. But the original reads [esp+8] inside 10062700 which corresponds to [sp0+4].
    // The prompt's contract line is `/* COW_CONTRACT ret=strict stack_args=0 */`. 
    // This usually implies no *stack* arguments are passed TO THIS FUNCTION in the sense of being popped by it? 
    // No, "stack_args" in the contract usually refers to the number of stack arguments the function takes.
    // The original `ret 4` pops 1 argument (4 bytes). So there IS a stack argument.
    // However, the provided contract line says `stack_args=0`. This is contradictory to `ret 4` unless 
    // the "stack_args" field in the contract refers to something else or is an error in the prompt's example/contract generation?
    // Let's look at the example: `ret=u32 stack_args=1` and `ret 4`.
    // Here we have `ret=strict stack_args=0` and `ret 4`.
    // If I follow the instructions strictly: "Use exactly this contract line".
    // And "rt_return's last argument is the number of ARGUMENT BYTES the original pops itself... ret 4 -> 4".
    
    // Let's re-read carefully.
    // "Contract line given: /* COW_CONTRACT ret=strict stack_args=0 */"
    // "It returns with `ret 4`: it pops 1 argument word(s) itself -> rt_return(g, ..., 4u)."
    
    // If stack_args=0, maybe the adapter shouldn't read stack args? But the code clearly does.
    // Perhaps `stack_args` in the contract refers to arguments passed in registers? No, that's not standard.
    // Or perhaps it means "no *additional* stack args beyond what is implied"?
    // Given the explicit instruction to use the contract line and the explicit instruction about `ret 4`, 
    // I will assume the function DOES take a stack argument (the flag) despite the `stack_args=0` label potentially being misleading or referring to something else in their internal schema.
    // However, looking at the example: `stack_args=1` matched `ret 4`.
    // Here `stack_args=0` matches `ret 4`. This is weird.
    
    // Let's look at the function entry again.
    // 10063090: sub ecx, 0x34; jmp 10062700.
    // It doesn't push anything before jumping.
    // The callee 10062700 reads [esp+8] after pushing ebx.
    // This is definitely a stack argument.
    
    // I will proceed by reading the stack argument in the adapter, as required by the logic.
    // The `stack_args=0` might be a typo in the prompt's provided contract line or refer to register args? 
    // Regardless, the code MUST read the flag from the stack to function correctly.
    
    const uint32_t result = cow_fn_10063090(g, self, flag);
    
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
